//
//  Teacher.cpp
//  
//
//  Created by Omar Yousuf Ahmed on 3/3/22.
//

#include "Teacher.h"
#include <iostream>
#include <string>

//function responsible for setting and checking name of user
bool Teacher::setName(string n){
    //declarations
    bool temp;
    
    //initializing
    temp = true;
    
    for (int i=0; i < size(n); ++i){
        //if digit is detected
        if (isdigit(n[i])){
            temp = false;
        }
        else if (isalpha(n[i])){
            //if digit isnt detected
            temp = true;
            name[i] = n[i];
        }
    }
    
    //returns bool 
    return temp;
}

//function responsible for returning user name
string Teacher::getName(){
    return name;
}

//function responsible for setting address
void Teacher::setAddress(string a){
    address = a;
}

//function responsible for returning address
string Teacher::getAddress(){
    return address; 
}

//function responsible for setting email
void Teacher::setEmail(string e){
    email = e;
}

//functin responsible for returning user email
string Teacher::getEmail(){
    return email;
}

//function responsible for setting and checking department name
bool Teacher::setDepartment(string d){
    //declarations
    bool temp;

    //initiazlizing
    temp = true;

    for (int i=0; i < size(d); ++i){
        //if digit is indicated
        if (isdigit(d[i])){
            temp = false;
        }
        //if digit is not indicated
        else if (isalpha(d[i])){
            temp = true;
            department[i] = d[i];
        }
    }

    //returns bool
    return temp;
}

//function responsible for returning department name
string Teacher::getDepartment(){
    return department;
}

//function responsible for setting and checking cu username
bool Teacher::setUser(string u){
    //declaration
    bool temp;
  
    //initializing
    temp = true;
    
    //if digit is found
    for (int i=0; i < size(u); ++i){
        if (isdigit(u[i])){
            temp = false;
        }
        //if digit isnt found
        else if (isalpha(u[i])){
            temp = true;
            username[i] = u[i];
        }
    }
    
    //returns bool
    return temp;
}

//function responsible for returing cu username
string Teacher::getUser(){
    return username;
}



