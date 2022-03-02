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

bool LowEmission::setMake(string m){
    bool temp;
    
    temp = true;
    
    for (int i=0; i < size(m); ++i){
        if (isdigit(m[i])){
            temp = false;
        }
        else if (isalpha(m[i])){
            temp = true;
            make[i] = m[i];
        }
    }
    
    return temp;
}

bool LowEmission::setModel(string m){
    bool temp;
    
    temp = true;
    
    if (size(m) > 0)
        model = m;
    else
        temp = false;
    
    return temp;
}
bool LowEmission::setColor(string c){
    bool temp; 
    
    temp = true;
    
    for (int i=0; i < size(c); ++i){
        if (isdigit(c[i])){
            temp = false;
        }
        else if (isalpha(c[i])){
            temp = true;
            color[i] = c[i];
        }
    }
    
    return temp;
}
void LowEmission::setType(char t){
    type = t; 
}

bool LowEmission::setPlate(string p){
    bool temp;
    
    temp = true;
    
    if (size(p) <= 7 && size(p) > 0)
        plate = p;
    else
        temp = false;
    
    return temp;
}

string LowEmission::getMake(){
    return make;
}
string LowEmission::getModel(){
    return model;
}
string LowEmission::getColor(){
    return color;
}
char LowEmission::getType(){
    return type;
}
string LowEmission::getPlate(){
    return plate;
}
