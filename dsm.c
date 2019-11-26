#include <stdio.h>
#include <string.h>	//strlen
#include <stdlib.h>	//strlen
#include <sys/socket.h>
#include <arpa/inet.h>	//inet_addr
#include <unistd.h>	//write
#include<signal.h>
#include <pthread.h> //for threading , link with lpthread
#include <sys/types.h>      /* key_t, sem_t, pid_t      			   */
#include <sys/shm.h>        /* shmget, shmat, shmctl     			   */
#include <sys/sem.h>        /* semget, semop, semctl				   */
#include <stdbool.h>		/* bool vars				               */
#include <sys/wait.h>		/* wait(NULL)      						   */
#include <semaphore.h>


#define PORT 7777
#define MAXCONN 128
#define TAM_TOTAL 1073741824;
#define TAM_PAG  4096;
#define CANT_NODOS 1;

void *connection_handler(void *);
int install_catcher(const int);
void catcher(int);
int calc_cant_paginas(int, int);
int calc_cant_paginas_por_nodo(int, int);
void inicializar_tabla_paginacion(int, int,char*, int );
void write_v(int *,int *,int *);
void write_p(int *,int *,int *);
void read_v(int *,int *,int *,int *);
void read_p(int *,int *,int *);

struct Pagina {	 
        int nodo;
  	    int proceso;
	    int num_pag;
	    int inicio_pag; 
        int fin_pag;
        int disponible;
        int validacion;
};  

struct Semp {
	int writers;
	int readers;
	int mutex;
	int resource;
};

struct Pagina  * tabla_paginas[];
struct Semp sem;
struct sockaddr_in server;

int main(int argc , char *argv[])
{
	struct sockaddr_in client;
	int socket_desc, new_socket, c, shmid, total_paginas, *new_sock;
	char *message;

	void *shared_memory = (void *)0;

	total_paginas = TAM_TOTAL div TAM_PAG;

	//Generar tabla de paginas
    shmid = shmget((key_t)12345678, sizeof(struct Pagina) * total_paginas, 0666 | IPC_CREAT);
    if (shmid == -1) {
          mensajeError("Error : semget\n");
          exit(EXIT_FAILURE);
    }
	shared_memory = shmat(shmid, (void *)0, 0);
    if (shared_memory == (void *)-1 ) {
		mensajeError("Error : shmat\n");
		exit(EXIT_FAILURE);
	}

	tabla_paginas = (struct Pagina *)shared_memory;

	//Generar semaforo
	shmid = shmget((key_t)87654321, sizeof(struct Semp), 0666 | IPC_CREAT);
    if (shmid == -1) {
          mensajeError("Error : semget\n");
          exit(EXIT_FAILURE);
    }
	shared_memory = shmat(shmid, (void *)0, 0);
    if (shared_memory == (void *)-1 ) {
		mensajeError("Error : shmat\n");
		exit(EXIT_FAILURE);
	}

	sem = (struct Semp)shared_memory;

	sem.mutex = 1;
	sem.resource = 1;
	sem.readers = 0;
	sem.writers = 0;
	//>>

	if (install_catcher(SIGINT)) {
        fprintf(stderr, "Cannot install signal handler: %s.\n", strerror(errno));
        return EXIT_FAILURE;
    }
	
	//Create socket
	socket_desc = socket(AF_INET , SOCK_STREAM , 0);
	if (socket_desc == -1)
	{
		printf("Could not create socket");
	}
	
	//Prepare the sockaddr_in structure
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = INADDR_ANY;
	server.sin_port = htons( PORT );
	
	//Bind
	if( bind(socket_desc,(struct sockaddr *)&server , sizeof(server))  < 0)
	{
		puts("bind failed");
		return 1;
	}
	puts("bind done");
	
	//Listen
	listen(socket_desc , MAXCONN);
	
	//Accept and incoming connection
	puts("Waiting for incoming connections...");
	c = sizeof(struct sockaddr_in);
	while( (new_socket = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&c)) )
	{
		puts("Connection accepted");
		
		//Reply to the client
		//message = "Hello Client , I have received your connection. And now I will assign a handler for you\n";
		//write(new_socket , message , strlen(message));
		
		pthread_t sniffer_thread;
		new_sock = malloc(1);
		*new_sock = new_socket;
		
		if( pthread_create( &sniffer_thread , NULL ,  connection_handler , (void*) new_sock)  < 0)
		{
			perror("could not create thread");
			return 1;
		}
		
		//Now join the thread , so that we dont terminate before the thread
		pthread_join( sniffer_thread , NULL);
		puts("Handler assigned");
	}
	
	if (new_socket <0)
	{
		perror("accept failed");
		return 1;
	}
	
	return 0;
}
/*
 * This will handle connection for each client
 * */
void *connection_handler(void *socket_desc)
{
	//Get the socket descriptor
	int sock = *(int*)socket_desc;
	int read_size;
	char *message , operation[1];
	int pagina;

	int cantidad_paginas;

	cantidad_paginas = TAM_TOTAL/TAM_PAG;
	
	operation[0] = '';
	//Envio la cantidad de paginas que necesita crear

	for(pagina = 0; sizeof(pagina)/sizeof(pagina[0]); pagina++)
	{
		tabla_paginas 
	}

	message = "Greetings! I am your connection handler\n";
	write(sock , message , strlen(message));
	
	message = "Now type something and i shall repeat what you type \n";
	write(sock , message , strlen(message));
	
	//Receive a message from client
	while( (read_size = recv(sock , operation , 1 , 0)) > 0 )
	{
		
		switch (operation[0])
		​{
			case "0": //Se cierra la conexion 
				//Poner todos los bits de validacion de paginas para este nodo en 0
				puts("Client disconnected");
				fflush(stdout);
				break;
			case "1":
				write(sock , client_message , strlen(client_message));
				break;
			case "2": 
				break;
			case "3": 
				break;			
			default:
			// default statements
		}
		
		//Send the message back to client
		write(sock , client_message , strlen(client_message));
	}
	
	if(read_size == 0)
	{
		puts("Client disconnected");
		fflush(stdout);
	}
	else if(read_size == -1)
	{
		perror("recv failed");
	}
		
	//Free the socket pointer
	free(socket_desc);
	
	return 0;
}

/* Signal handler. Just outputs a line to standard error. */
void catcher(int signum)
{
    switch (signum) {
    case SIGINT:
        printf("Caught INT signal.\n");
		signal(SIGINT, SIG_IGN);
		exit(0);
        return;
    default:
        printf("Caught a signal.\n");
        return;
    }
}

/* Helper function to install the signal handler. */
int install_catcher(const int signum)
{
    struct sigaction  act;

    memset(&act, 0, sizeof act);
    sigemptyset(&act.sa_mask);

    act.sa_handler = catcher;
    act.sa_flags = SA_RESTART;  /* Do not interrupt "slow" functions */
    if (sigaction(signum, &act, NULL) == -1)
        return -1;  /* Failed */

    return 0;
}

int calc_cant_paginas(int tamPag, int tamTot){
    int cantPagina = tamTot / tamPag;
    return cantPagina;

};

int calc_cant_paginas_por_nodo(int cantNodos , int totalPag){
    int cantPaginasXNodo = totalPag / cantNodos;
    return cantPaginasXNodo;

};

void inicializar_tabla_paginacion(int tamTot, int tamPag,char* nodes, int cantNodos){
    int total_pag = calc_cant_paginas(tamPag,tamTot);
	int cant_pag_x_nodo = calc_cant_paginas_por_nodo(cantNodos,totalPag);
	int index_nodo, contador_paginas_x_nodo; 
	index_nodo, contador_paginas_x_nodo = 0;
	char *nodo_actual = nodes[x];
	for(int i = 0; i < total_pag ;i++){
		if(contador_paginas_x_nodo == cant_pag_x_nodo)
		{
			contador_paginas_x_nodo = 0;
			nodo_actual = nodes[++index_nodo];
		}
		struct Pagina *pagina;
		pagina = tabla_paginas[i];
		pagina->nodo = nodo_actual;
		pagina->validacion = 0;
		contador_paginas_x_nodo++;
	}
};

void write_v(int *mutex,int *resource,int *writers)
{
	sem_wait(*mutex);
    *writers++;
    sem_post(*mutex);     
    sem_wait(*resource);
}
void write_p(int *mutex,int *resource,int *writers)
{    
    sem_wait(*mutex);
    *writers--; 
    sem_post(*mutex);
    sem_post(*resource);

}
void read_v(int *mutex,int *resource,int *readers, int *writers)
{
	sem_wait(*mutex);
    if (*writers > 0 || *readers == 0)
    {
        sem_post(*mutex);
        sem_wait(*resource);
        sem_wait(*mutex);
    }
    *readers++;
}
void read_p(int *mutex,int *resource,int *readers)
{
	sem_wait(*mutex);
    *readers--;
    if (*readers == 0)
        sem_post(*resource);
    sem_post(*mutex);
}