#ifndef __student_h__
#define __student_h__

#include <iostream>

using namespace std;

class Student
{
    private: 
        string name;
        string address;
        string email;
        string CUID;
        string residentBuilding;

    public:
        void setName(string name) {
            this->name = name;
        }
        string getName(void) {
            return this->name;
        }
        void setAddress(string address) {
            this->address = address;
        }
        string getAddress(void) {
            return this->address;
        }        
        void setEmail(string email) {
            this->email = email;
        }
        string getEmail(void) {
            return this->email;
        }
        void setCUID(string CUID) {
            this->CUID = CUID;
        }
        string getCUID(void) {
            return this->CUID;
        }
        void setResidentBuilding(string ResBuild) {
            this->residentBuilding = ResBuild;
        }
        string getResidentBuilding(void) {
            return this->residentBuilding;
        }                      
};


#endif