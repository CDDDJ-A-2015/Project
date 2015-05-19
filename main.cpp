/*
 * File:   main.cpp
 * Author: dm940
 *
 * Created on 21 March 2015, 3:34 PM
 */

#include <QApplication>
#include "Project.h"
#include "Home.h"
#include "Login.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <netdb.h> 
#include <vector>
#include <cstring>

#include "Packets.h"

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

int sockfd;

int main(int argc, char *argv[]) {
    int portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    portno = 32002;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) 
        error("ERROR opening socket");
    server = gethostbyname("10.24.70.77");
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    serv_addr.sin_port = htons(portno);
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
        error("ERROR connecting");
	
    
    QApplication app(argc, argv);

    // create and show your widgets here
    Login a;
    a.show();
    app.exec();
    close(sockfd);    
    return 0;
}
