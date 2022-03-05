//Sam Crooks

#include <iostream>
#include <string>
#include "Moped.h"
using namespace std;

void Moped::setMake(string m)
    {make = m;}
void Moped::setModel(string m)
    {model = m;}
void Moped::setColor(string c)
    {color = c;}
void Moped::setInFrat(bool f)
    {inFrat = f;}
void Moped::setEngineSize(int s)
    {engineSize = s;}
string Moped::getMake()
    {return make;}
string Moped::getModel()
    {return model;}
string Moped::getColor()
    {return color;}
bool Moped::getInFrat()
    {return inFrat;}
int Moped::getEngineSize()
    {return engineSize;}