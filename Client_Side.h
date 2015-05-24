#ifndef __CSCI311_Project__Client_Side__
#define __CSCI311_Project__Client_Side__

#include <stdio.h>
#include <vector>
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
#include <cstring>

/*  ~~~~~~~~~~~~  */
/*  GLOBAL LISTS  */
/*  ~~~~~~~~~~~~  */

/*  PROJECT  */
struct Project_List{
   /* int ID;
    char Name[50];
    int Manager_ID;
    char Description[256];
    int Progress;
    char End_Date[11];
    
    
    char Manager_FName[50]; //Managers info
    char Manager_LName[50];
    */
    int ID;
    char Name[50];
   // int Manager_ID;//Get rid of??
   // int Team_ID;//Get rid of??
   // char Description[256];//Get rid of
    int Progress;
   // char Start_Date[11];//Get rid of
    char End_Date[11];
   // char Last_Updated[256];//Get rid of
    bool active;
    
    char Manager_Name[50]; //Managers info

};

//CHANGE ALL NAMES TO SINGULAR 50 CHARS

/*  USER  */
struct User_List{
    int user_id;
    char Name[50];
   // char f_name[50];
   // char l_name[50];
  //  char dob[11]; //Get rid of
    char location[50];
    char email[50];
    bool Admin;
};



/*  Roles  */
struct Role{
    int ID;
    char Name[50];
    char Description[256];
    bool Default_Role;
};



/*  ~~~~~~~~~~~~  */
/*  USER STRUCTS  */
/*  ~~~~~~~~~~~~  */

struct Notification;
struct User_Task;
struct Expertise;
struct User_Project;
struct User_Role;
struct My_Project;

/*  DONE  */
struct Home_Screen_User{
    int user_id;
    char Name[50];
    
    std::vector<Notification>Notifications;
    std::vector<My_Project>My_Projects;
    std::vector<User_Task>Assigned_Tasks;
};

struct Name_Of_User{
    char Name[50];
    bool ADMIN;
};

struct Name_Of_Project{
    char Name[50];
};

struct User_Profile_Screen{
    int user_id;
    char Name[50];
    char location[50];
    char email[50];
    bool canedit;
 
    std::vector<User_Role>Previous_Roles;
    std::vector<Expertise>Expertises;
};

struct UPS_Packet{
    int ID;
    char Name[50];
    char location[50];
    char email[50];
    bool canedit;
};


//ADDED THIS
struct Save_UPS_Packet{
    int ID;
    char Name[50];
    char location[50];
    char email[50];
    unsigned int Expertises_size;
};


//ADDED THIS
struct createUser_Packet{
    char name[50];
    char dob[11];
    char password[21];
    char location[50];
    char email[50];
    bool admin;
    
    unsigned int Expertises_size;
};

struct User{
    int user_id;
    char f_name[50];
    char l_name[50];
    char dob[11]; //Get rid of
    char location[50]; //Get rid of
    char email[50]; //Get rid of
    char password[20]; //Get rid of
    bool active; //Get rid of
    bool admin;
    
    /*  Standard Users  */
    std::vector<Notification>Notifications;
    std::vector<Expertise>Expertises;
    std::vector<User_Role>Previous_Roles;
    std::vector<int>Previous_Projects;
    
    /*  Team Members  */
    std::vector<int>Current_Projects;
    std::vector<User_Task>Assigned_Tasks;
    
    /*  Managers  */
    std::vector<int>Managed_Projects;
};

struct Notification{
    char Message[256];
    bool read;//Get rid of
};

//Myprojects
struct My_Project{
    int ID;
    char Name[50];
    int Progress;
    char End_Date[11];
    bool active;
    char Role[50];
    
    //Put in USER ROLE
    
    char Manager_Name[50];
};

struct User_Task{
    char Project_Name[50];
    int Task_ID;
    char Name[50];

    int Priority;
    int status;

    char Date_Due[11];
    int Day_Due;
};

struct Expertise{
    char Name[50];
};

struct APN_Dependencies{
    int parent;
};


struct APN_Packet{
    char Name[50];
    int Length;
    int ID;
    int Dependency;
};

struct APN_List{
    char Name[50];
    int Length;
    int ID;
    std::vector<int> Parents;
};

struct APN_Data{
    std::vector<APN_List>List;
};

struct User_Role{
    char Name[50];
    char Project_Name[50];
    bool active;
};

/*  ~~~~~~~~~~~~~~~  */
/*  PROJECT STRUCTS  */
/*  ~~~~~~~~~~~~~~~  */

struct Project_Task;
struct Project_Comment;
struct Task_Comment;
struct Team_Member;
struct Task_Assignment;
struct Task_List;

struct Specific_Project{
    int ID;
    char Name[50];
    int Manager_ID;
    char Description[256];
    int Progress;
    char End_Date[11];
    char Last_Updated[256];
    bool active;
    bool canedit;
    char Manager_Name[50];
    int CCMO1;
    int CCMO2;
    int F_Points;
    
    
    std::vector<Task_List>Tasks;//change to task list
    std::vector<Project_Comment>Project_Comments;
    std::vector<Team_Member>Team;//Get rid of
    
};

struct createProject_Packet{
    char Name[50];
    int Manager_ID;
    char Description[256];
    char End_Date[11];
    char Last_Updated[256];
    char Beg_date[11];
};

struct save_P_Team{
    int user_id;
    int role_id;
};

struct Project_Packet{
    char Name[50];
    int Manager_ID;
    char Description[256];
    int Progress;
    char End_Date[11];
    char Last_Updated[256];
    bool active;
    bool canedit;
    char Manager_Name[50];
    int CCMO1;
    int CCMO2;
    int F_Points;
};

struct Task_List{
    int ID;
    int status;
    char name[50];
    char date_due[11];//Day DUE??
    int priority;
    int Progress;
};

struct Task_Packet{
    char Name[50];
    char Description[256];
    int Progress;
    int Status;
    int Priority;
    char Date_Due[11];
    bool canedit;
    int Length;
    char Last_Updated[11];
    int Project_ID;
};

struct Project_Task{
    int Task_ID;
    char Name[50];
    char Description[256];
    int Progress;
    int Status;
    int Priority;
    int Length;
    bool canedit;
    int Project_ID;
    
    char Last_Updated[11];
    char Date_Due[11];
    
    std::vector<Task_Assignment>Assigned;
    std::vector<Task_Comment>Task_Comments;
    std::vector<Task_List>Parent_Task;
    std::vector<Task_List>Child_Task;
};

struct create_Task_Packet{
    int Task_ID;
    char Name[50];
    char Description[256];
    int Progress;
    int Status;
    int Priority;
    int Length;
    int Project_ID;
    
    char Last_Updated[11];
    char Date_Due[11];
    
    int NUM_P_Tasks;
    int NUM_C_Tasks;
};


struct Task_Assignment_Packet{
    char Name[50];
    int User_ID;
    bool canedit;
};

struct Task_Assignment{
    char Name[50];
    int User_ID;
};

struct Project_Comment{
    char Comment[256];
    char Date[11];
    int User_ID;
};

struct Task_Comment{
    char Comment[256];
    char Date[11];
    int User_ID;
};

struct Team_Member{
    int User_ID;
    char Name[50];
    char Role[50];
};

/*
 
 COCOMO 1 & 2 ints
 FUNCTION POINTS ints
 
 
 CHANGE DATES TO WEEK DUE
 WEEK START
 
 
 
 */


#endif /* defined(__CSCI311_Project__Client_Side__) */