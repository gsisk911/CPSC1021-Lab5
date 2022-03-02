#include <iostream>
#include <string>
#include "Visitor.h"
using namespace std;

void Visitor::setName(string n) 
    {name = n;}
void Visitor::setAddress(string a)
    {address = a;}
void Visitor::setEmail(string e)
    {email = e;}
void Visitor::setDays(int d)
    {days = d;}
void Visitor::setOnTour(bool t)
    {onTour = t;}
string Visitor::getName() 
    {return name;}
string Visitor::getAddress()
    {return address;}
string Visitor::getEmail()
    {return email;}
int Visitor::getDays()
    {return days;}
bool Visitor::getOnTour()
    {return onTour;}
