//
//  LowEmission.cpp
//  Parking Permits
//
//  Created by Omar Yousuf Ahmed on 3/2/22.
//

#include "LowEmission.h"
#include <string>
#include <iostream>


using namespace std;

//function responsible for setting and checking make of vehicle
bool LowEmission::setMake(string m){
    //declarations
    bool temp;
    
    //initialization
    temp = true;

    for (int i=0; i < size(m); ++i){
        //if digit is found
        if (isdigit(m[i])){
            temp = false;
        }
        //if digit isnt found
        else if (isalpha(m[i])){
            temp = true;
            make[i] = m[i];
        }
    }
    
    //returns bool
    return temp;
}

//function responsible for setting and checking the model name
bool LowEmission::setModel(string m){
    //declarations
    bool temp;
    
    //initialization
    temp = true;
    
    //checks size of model input
    if (size(m) > 0)
        model = m;
    else
        temp = false;
    
    //returns bool variable
    return temp;
}

//function responsible for setting and checking color name
bool LowEmission::setColor(string c){
    //declarations
    bool temp; 
    
    //initialization
    temp = true;
    
    for (int i=0; i < size(c); ++i){
        //if digit is found
        if (isdigit(c[i])){
            temp = false;
        }
        //if digit isnt found
        else if (isalpha(c[i])){
            temp = true;
            color[i] = c[i];
        }
    }
    
    //returns bool
    return temp;
}

//function sets vehicle type
void LowEmission::setType(char t){
    type = t; 
}

//function checks and sets plate number
bool LowEmission::setPlate(string p){
    //declarations
    bool temp;
    
    //initialization
    temp = true;
    
    //checks if plate size is valid and has at most 7 characters
    if (size(p) <= 7 && size(p) > 0)
        plate = p;
    else
        temp = false;
    
    //returns bool variable
    return temp;
}

//function returns vehicle make
string LowEmission::getMake(){
    return make;
}

//function returns vehicle model
string LowEmission::getModel(){
    return model;
}

//function returns vehicle color
string LowEmission::getColor(){
    return color;
}

//function returns lev type
char LowEmission::getType(){
    return type;
}

//function return vehicle plate
string LowEmission::getPlate(){
    return plate;
}
