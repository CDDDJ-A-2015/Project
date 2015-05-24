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
#include <iostream>
#include "Packets.h"
#include "displayGraphics.h"
#include <QMessageBox>
using namespace std;

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

int sockfd;

void User_Logout();

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
    int portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
	                            
    portno = 32001;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) 
        error("ERROR opening socket");
    server = gethostbyname("localhost");
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
    while (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) {
        //error("ERROR connecting");
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Critical);
		msgBox.setText("Error connecting to server");
		msgBox.setInformativeText("Do you wish to retry?");
		msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
		msgBox.setDefaultButton(QMessageBox::No);
		int ret = msgBox.exec();
		switch (ret) {
		  case QMessageBox::Yes:
			  //delete task
			  break;
		  case QMessageBox::No:
			  return 0;
			  break;
		  default:
			  // should never be reached
			  break;
		}
	}
	
    
    

    // create and show your widgets here
    Login a;
    a.show();
    app.exec();
    close(sockfd);    
    return 0;
}

void User_Logout()
{
    Type_Packet T;
    Request_Packet RP;
    int n;
    
    RP.Request = true;
    
    //Send to server that client is about to request something
    n = write(sockfd,&RP,sizeof(RP));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    //Send to server that client is about to send The Global Project List
    T.T = 42;
    n = write(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR writing to socket" << endl;
    
    n = read(sockfd,&T,sizeof(T));
    if (n < 0)
        cout << "ERROR reading to socket" << endl;
    if(T.T == 42)
        cout << "Logged Out Successfully" << endl;
    
}