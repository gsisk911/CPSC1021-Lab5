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

void Vendor:: setEmail(string e){
    email = e;
}

void Vendor:: setCompany(string c){
    company = c;
}

bool Vendor:: setHoursOfService(int h){
    bool validHOS = true; 
    if (h < 0){
        return false;
    }
    else{
        hoursOfService = h;    
    }
}

string Vendor:: getName(){
    return name;
}

string Vendor:: getAddress(){
    return address; 
}

string Vendor:: getEmail(){
    return email;
}

string Vendor:: getCompany(){
    return company; 
}

int Vendor:: getHoursOfService(){
    return hoursOfService;
}