include <stdio.h>
include <stdlib.h>
include <sys/types.h>
include <sys/socket.h>
include <netinet/in.h>

int main(){
<<<<<<< Updated upstream
	int network_socket;
	int rc;
	network_socket = socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9001);
	server_address.sin_addr.s_addr = INADDR_ANY;
	int connection = connect(network_socket,(struct sockaddr * ) &server_address, sizeof(server_address));
	char server_response[256];
	recv(network_socket, server_response, sizeof(server_response),0);
	printf("%s",server_response);
	rc = close(network_socket);
	return 0;
=======
        int network_socket;
        network_socket = socket(AF_INET,SOCK_STREAM,0);
        struct sockaddr_in server_address;
        server_address.sin_family = AF_INET;
        server_address.sin_port = htons(9001);
        server_address.sin_addr.s_addr = INADDR_ANY;

        int connection = connect(network_socket,
             (struct sockaddr *) &server_address,sizeof(server_address));
        int connection;
        connect(network_socket,(struct sockaddr * ) &server_address, sizeof(server_address));
        char server_response[256];
        recv(network_socket, server_response, sizeof(server_response),0);
        printf("%s",server_response);
        close(network_socket);
        return 0;
>>>>>>> Stashed changes
}
