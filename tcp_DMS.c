
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
	char server_message[256]="Hola Mundo";
        int server_socket;
        server_socket = socket(AF_INET,SOCK_STREAM,0);
        struct sockaddr_in server_address;
        server_address.sin_family = AF_INET;
        server_address.sin_port = htons(9001);
        server_address.sin_addr.s_addr = INADDR_ANY;

        int connection = bind(server_socket,(struct sockaddr * ) &server_address, sizeof(server_address));
       	listen(server_socket,1);
	int cliente_socket;
	cliente_socket = accept(server_socket,NULL,NULL);
	send(cliente_socket,server_message,sizeof(server_message),0);
	pclose(server_socket);
        return 0;
}

