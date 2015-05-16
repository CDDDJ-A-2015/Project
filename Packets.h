//
//  Packet_Wrappers.h
//  CSCI311 Project
//
//  Created by Daniel Watt on 5/04/2015.
//  Copyright (c) 2015 Daniel Watt. All rights reserved.
//

#ifndef __CSCI311_Project__Packets__
#define __CSCI311_Project__Packets__
#include <stdio.h>
#include <iostream>
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


//Several Types of Packets are needed to differentiate between requests and data sets

/*  Client to Server - Request Packet Types */
/*
 
 TYPE =
 
 Login Packet   = 1
 
 Project List   = 2
 User List      = 3
 Role           = 4
 
 Project Info   = 5
 Team Members   = 6
 Comments       = 7
 Tasks          = 8
 Task Comments  = 9
 Task Assigns   = 10
 Task Parents   = 11
 
 User Info      = 12
 Prev Projects  = 13
 Notifications  = 14
 Prev Roles     = 15
 Cur Projects   = 16
 Assigned Tasks = 17

*/

/*  Server to Client - Response Packet Types */
/*
 
 Login Response = 1
 Project List   = 2
 User List      = 3
 Role           = 4
 
 Logout         = 18
 
 Result Packet = 20 - Result of Query
 User Info Packet = 2
 Project List Packets = 3
 User List Packets = 4
 Notification Packets = 5
 Task/Sub-Task Packets = 6
 
 
 */

struct Request_Packet{
    bool Request; //True = GET && False = SAVE
};

struct Type_Packet{
    int T; //Packet Type
    int Num; //Number of Packets This Type
};

struct Login_Packet {
    char uName[17];
    char pWord[21];
};

struct User_Packet{
    int ID;
    char F_Name[50];
    char L_Name[50];
    char DOB[10];
    char Location[50];
    char Email[30];
};

struct Project_Packet{
    int ID;
    char Name[50];
    
};

struct List_Packet{
    
    char Var1[256]; //Either First Name OR Project Name
    char Var2[256]; //Either Last Name OR Project Description
    
    
};





#endif
