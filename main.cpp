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


#include "Packets.h"
int sockfd;
    
    
    int portno = 32001;
    long n;
    struct sockaddr_in serv_addr;
    struct hostent *server;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    
    //if (argc < 3) {
    //    std::cout << "usage: ./Client hostname port" << std::endl;
    //   exit(0);
    //}
/*
    //portno = atoi(argv[2]);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        //std::cout << "ALL\n";
        //exit(0);
    }
        //error("ERROR opening socket");

    server = gethostbyname("localhost");
    
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }
    
    memset((char *) &serv_addr, 0, sizeof(serv_addr));
    
    serv_addr.sin_family = server->h_addrtype;
    
    memcpy((char *) &serv_addr.sin_addr.s_addr, server->h_addr_list[0], server->h_length);
    serv_addr.sin_port = htons(portno);
    if(connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr))< 0){
        std::cout << "ALLO\n";
        //exit(0);
        //error("ERROR connecting");
    }
    */
    
    QApplication app(argc, argv);

    // create and show your widgets here
    Login a;
    a.show();
    app.exec();
    close(sockfd);    
    return 0;
}
