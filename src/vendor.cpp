#include <iostream>
#include <iomanip>
#include <string>
#include "vendor.h"

using namespace std; 

void Vendor:: setName(string n){
    name = n;
}

void Vendor:: setAddress(string a){
    address = a;
}

void Vendor:: setEmail(int e){
    email = e;
}

void Vendor:: setCompany(string c){
    company = c;
}

bool Vendor:: sethoursOfService(int h){
    bool validHOS = true; 
    if (h < 0){
        return false;
    }
    else{
        hoursOfService = h;    
    }
}

string Vendor:: getName(){
    return make;
}

string Vendor:: getAdress(){
    return model; 
}

string Vendor:: getEmail(){
    return email
}

string Vendor:: getCompany(){
    return company; 
}

int Vendor:: gethoursOfService(){
    return hoursOfService;
}