//
//  LowEmission.h
//  Parking Permits
//
//  Created by Omar Yousuf Ahmed on 2/28/22.
//

#ifndef LOWEMISSION_H
#define LOWEMISSION_H
 
#include <string>

using namespace std;

//class initialization
class LowEmission{
    
    //private members
    private:
        string make, model, color, plate;
        char type;
    //public members
    public:
        string getMake();
        string getModel();
        string getColor();
        char getType();
        string getPlate();
        bool setMake(string m);
        bool setModel(string m);
        bool setColor(string c);
        void setType(char t);
        bool setPlate(string p);
};

#endif /* LOWEMISSION_H */
