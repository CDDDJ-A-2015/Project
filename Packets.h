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

//Several Types of Packets are needed to differentiate between requests and data sets

/*  Client to Server - Request Packet Types */
/*
 
 Request = true OR false
    -true equals wants data- AND -false equals wants to save data-
 
 TYPE:
 
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
 
 
 Login Response         = 1 OR -1
    -[1] equals succeeded- AND -[-1] equals denied-
 
 Project List           = 2
 User List              = 3
 Role List              = 4
 
 Project Info Packet    = 5
 Team Members           = 6
 Project Comments       = 7
 Task Info              = 8
 Task Comments          = 9
 Task Assignments       = 10
 Task Dependencies      = 11
 
 User Info Packet       = 12
 Previous Projects      = 13
 Notifications          = 14
 Previous Roles         = 15
 Current Projects       = 16
 Assigned Tasks         = 17
 
 Expertises             = 18
 Managed Projects       = 19
 
 Logout                 = 20
 
 End Packet             = -5
 
 Server Error           = -2
 
 
 
 */

struct Request_Packet{
    bool Request; //True = GET && False = SAVE
};

struct Type_Packet{
    int T; //Packet Type
    int ID;
   // int Num; //Number of Packets This Type
};

struct Login_Packet{
    char uName[17];
    char pWord[21];
};

struct Login_User_Packet{
    int ID;
    char F_Name[50];
    char L_Name[50];
    char DOB[11];
    char Location[50];
    char Email[50];
    char Password[20];
    bool Active;
    bool Admin;
     //int create;
};

struct User_Packet{
    /*int ID;
    char F_Name[50];
    char L_Name[50];
    char DOB[11];
    char Location[50];
    char Email[50];
    char Password[20];
    bool active;
    //int create;*/
    
    int user_id;
    char f_name[50];
    char l_name[50];
    char dob[11];
    char location[50];
    char email[50];
    bool Admin;
};

struct Previous_Project{
    int Project_ID;
};

struct Notification_Packet{
    char Message[256];
    bool read;
    int ID;
};

struct Expertise_Packet{
    int ID;
    char Name[50];
};

struct Previous_Role_Packet{
    int ID;
    char Role_Name[50];
};

struct Role_Packet{
    int ID;
    char Name[50];
    char Description[256];
    bool Default_Role;
};
/*
struct Project_Packet{
    int ID;
    char Name[50];
    int Manager_ID;
    int Team_ID;
    char Description[256];
    int Progress;
    char Start_Date[11];
    char End_Date[11];
    char Last_Updated[256];
    bool active;
    
    char Manager_FName[50]; //Managers info
    char Manager_LName[50]; //Managers info
};
*/
struct Team_Member_Packet{
    int ID;
    int Project_ID;
    char F_Name[50];
    char L_Name[50];
    
};
/*
struct Task_Packet{
    int Project_ID;
    int Task_ID;
    char Name[50];
    char Description[256];
    int Parent_ID;
    int Progress;
    int Pending;
    int Priority;
    
    char Date_Created[11];
    char Date_Due[11];
};*/
/*
struct Task_Assignment_Packet{
    int Project_ID;
    int Task_ID;
    char Name[50];
    char Description[256];
    int Progress;
    int Priority;
    int Pending;
    
    char Date_Created[11];
    char Date_Due[11];
};
*/
struct Project_Comment_Packet{
    char Comment[256];
    char Date[11];
    int User_ID;
};

struct Task_Comment_Packet{
    char Comment[256];
    char Date[11];
    int User_ID;
    int Task_ID;
    int Project_ID;
};

struct Task_Dependencies_Packet{
    int Project_ID;
    int Child_Task_ID;
};







#endif