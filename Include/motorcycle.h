#ifndef MOTORCYCLE_H_
#define MOTORCYCLE_H_

#include <iostream>

using namespace std;

class Motorcycle{
    
    private:
        string make; 
        string model; 
        int headlights; 
        string color; 
        string fuel; 
    public:
        void setMake(string m);
        void setModel(string o); 
        bool setHeadlights(int h);
        void setColor(string c); 
        void setFuel(string f); 
        string getMake(); 
        string getModel(); 
        int getHeadlights(); 
        string getColor(); 
        string getFuel(); 
};
#endif