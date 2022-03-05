//Sam Crooks

#ifndef MOPED_H_
#define MOPED_H_
#include <iostream>
#include <string>
using namespace std;

class Moped 
{
    public:
        Moped() = default;
        Moped(string ma, string mo, string c, bool f, int s) : make{ma}, model{mo}, color{c}, inFrat{f}, engineSize{s} {}
        void setMake(string m);
        void setModel(string m);
        void setColor(string c);
        void setInFrat(bool f);
        void setEngineSize(int s);
        string getMake();
        string getModel();
        string getColor();
        bool getInFrat();
        int getEngineSize();

    private:
        string make {"car"};
        string model {"car"};
        string color {"white"};
        bool inFrat {false};
        int engineSize {0};
};

#endif