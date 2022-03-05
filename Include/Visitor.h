// Sam Crooks

#ifndef VISITOR_H_
#define VISITOR_H_
#include <iostream>
#include <string>
using namespace std;


class Visitor
{
    public:
        Visitor() = default;
        Visitor(string n, string a, string e, int d, bool o) : name{n}, address{a}, email{e}, days{d}, onTour{o} {}
        void setName(string n);
        void setAddress(string a);
        void setEmail(string e);
        void setDays(int d);
        void setOnTour(bool t);
        string getName();
        string getAddress();
        string getEmail();
        int getDays();
        bool getOnTour();

    private:
        string name {"first last"};
        string address {"123 ln"};
        string email {"abc@clemson.edu"};
        int days {0};
        bool onTour {false};
};

#endif