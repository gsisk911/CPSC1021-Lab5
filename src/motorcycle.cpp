#include <iostream>
#include <iomanip>
#include <string>
#include "motorcycle.h"

using namespace std; 

void Motorcycle:: setMake(string m){
    make = m;
}

void Motorcycle:: setModel(string o){
    model = o;
}

bool Motorcycle:: setHeadlights(int h){
    bool validHeadlights = true; 
    if (h < 0){
        return false;
    }
    else{
        headlights = h;    
    }
}

void Motorcycle:: setColor(string c){
    color = c;
}

void Motorcycle:: setFuel(string f){
    fuel = f;
}

string Motorcycle:: getMake(){
    return make;
}

string Motorcycle:: getModel(){
    return model; 
}

int Motorcycle:: getHeadlights(){
    return headlights
}

string Motorcycle:: getColor(){
    return color; 
}

string Motorcycle:: getFuel(){
    return fuel;
}