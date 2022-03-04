//
//  Teacher.h
//  
//
//  Created by Omar Yousuf Ahmed on 3/3/22.
//

#ifndef Teacher_h
#define Teacher_h

#include <stdio.h>
#include <string>

using namespace std;

//class initialization
class Teacher{
    //private members
    private:
        string name;
        string address;
        string email;
        string department;
        string username;
    //public members
    public:
        bool setName(string n);
        string getName();
        void setAddress(string a);
        string getAddress();
        void setEmail(string e);
        string getEmail();
        bool setDepartment(string d);\
        string getDepartment();
        bool setUser(string u);
        string getUser();
    
};

#endif /* Teacher_h */
