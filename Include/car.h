#ifndef __car_h__
#define __car_h__

#include <iostream>

using namespace std;

class Car
{
    private: 
        string make;
        string model;
        string color;
        int year;
        bool isSlow;

    public:
        void setMake(string make) {
            this->make = make;
        }
        string getMake(void) {
            return this->make;
        }
        void setModel(string model) {
            this->model = model;
        }
        string getModel(void) {
            return this->model;
        }        
        void setColor(string color) {
            this->color = color;
        }
        string getColor(void) {
            return this->color;
        }
        void setYear(int year) {
            this->year = year;
        }
        int getYear(void) {
            return this->year;
        }
        void setIsSlow(float ZeroToSixty) {
            if (ZeroToSixty > 5.0)
                this->isSlow = true;
            else
                this->isSlow = false;
        }
        int getIsSlow(void) {
            return this->isSlow;
        }

};

#endif