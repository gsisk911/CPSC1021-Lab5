#include <iostream>
#include <sstream>
#include "student.h"
#include "car.h"
#include "Visitor.h"
#include "Moped.h"
#include "vendor.h"
#include "motorcycle.h"

using namespace std;

enum customerType { employee = 1, student, visitor = 3, vendor};
enum vehType { car = 1, lev, moped, motorcycle};
enum passType { commuterP, residentP, teacherP, visitorP, vendorP, motorcycleP };

int makeInvoice();

//test comment


int main()
{
    int buf {0};
    customerType userCustomer;
    vehType userVeh;

    
    cout << "Are you an employee(1), student(2), visitor(3), or vendor(4)?" << endl;
    std::cin >> buf;
    userCustomer = (customerType)buf;

    switch (userCustomer)
    {
        case employee:
        {

        }
        case student:
        {
            using std::cin;

            Student *user =  new Student;

            string nameF;
            string nameL;
            cout << "What is your first name?" << endl;
            std::cin >> nameF;
            cout << "What is your last name?" << endl;
            std::cin >> nameL;
            user->setName(nameF+" "+nameL);

            cout << user->getName() << endl;

            std::cin.ignore();
            string address;
            cout << "What is your address?" << endl;
            getline(cin, address);
            user->setAddress(address);

            cout << user->getAddress() << endl;

            string email;
            cout << "What is your email address?" << endl;
            std::cin >> email;
            user->setEmail(email);

            cout << user->getEmail() << endl;

            string CUID;
            cout << "What is your CUID?" << endl;
            std::cin >> CUID;
            user->setCUID(CUID);

            cout << user->getCUID() << endl;

            string residentBuilding;
            cout << "If you live on campus which residence hall do you live in? (enter NA if off campus)" << endl;
            std::cin >> residentBuilding;
            user->setResidentBuilding(residentBuilding);    

            cout << user->getResidentBuilding() << endl;        

            cout << "Do you drive a car/truck/suv(1), low-emission vehicle(2), moped(3), or motorcycle(4)?" << endl;
            std::cin >> buf;
            userVeh = (vehType)buf;

            switch (userVeh)
            {
                case car:
                {
                    Car *userCar = new Car;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    userCar->setMake(make);

                    cout << userCar->getMake() << endl;

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    userCar->setModel(model);

                    cout << userCar->getModel() << endl;

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    userCar->setColor(color);

                    cout << userCar->getColor() << endl;

                    int year;
                    cout << "What is your vehicle year?" << endl;
                    std::cin >> year;
                    userCar->setYear(year);

                    cout << userCar->getYear() << endl;

                    double zeroToSixty;
                    cout << "What is your vehicle's 0-60 time in seconds?" << endl;
                    std::cin >> zeroToSixty;
                    userCar->setIsSlow(zeroToSixty);
                    
                    cout << userCar->getIsSlow() << endl;

                }
                case lev:
                {
                    break;
                }
                case moped:
                {
                    Moped moped;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    moped.setMake(make);

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    moped.setModel(model);

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    moped.setColor(color);

                    bool inFrat;
                    cout << "Are you in a Fraterity? (1 for yes, 0 for no)" << endl;
                    cin >> inFrat;
                    moped.setInFrat(inFrat);

                    int engineSize;
                    cout << "What is the size of your engine (cc's)" << endl;
                    cin >> engineSize;
                    moped.setEngineSize(engineSize);

                    break;
                }
                case motorcycle:
                {
                    break;
                }
                default:
                {
                    cout << "Unknown Input" << endl;
                    return 1;
                }
            }
            break;
        }
        case visitor:
        {
            Visitor visitor;

            string nameF;
            string nameL;
            cout << "What is your first name?" << endl;
            cin >> nameF;
            cout << "What is your last name?" << endl;
            cin >> nameL;
            visitor.setName(nameF+" "+nameL);

            cout << visitor.getName() << endl;

            std::cin.ignore();
            string address;
            cout << "What is your address?" << endl;
            getline(cin, address);
            visitor.setAddress(address);

            cout << visitor.getAddress() << endl;

            string email;
            cout << "What is your email address?" << endl;
            cin >> email;
            visitor.setEmail(email);

            cout << visitor.getEmail() << endl;

            int days;
            cout << "How many days will you be visiting?" << endl;
            cin >> days;
            visitor.setDays(days);

            cout << visitor.getDays() << endl;

            bool onTour;
            cout << "Are you on a tour of Clemson? (1 for yes, 0 for no)" << endl;
            cin >> onTour;
            visitor.setOnTour(onTour);

            cout << visitor.getOnTour() << endl;

            cout << "Do you drive a car/truck/suv(1), low-emission vehicle(2), moped(3), or motorcycle(4)?" << endl;
            std::cin >> buf;
            userVeh = (vehType)buf;

            switch (userVeh)
            {
                case car:
                {
                    Car *userCar = new Car;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    userCar->setMake(make);

                    cout << userCar->getMake() << endl;

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    userCar->setModel(model);

                    cout << userCar->getModel() << endl;

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    userCar->setColor(color);

                    cout << userCar->getColor() << endl;

                    int year;
                    cout << "What is your vehicle year?" << endl;
                    std::cin >> year;
                    userCar->setYear(year);

                    cout << userCar->getYear() << endl;

                    double zeroToSixty;
                    cout << "What is your vehicle's 0-60 time in seconds?" << endl;
                    std::cin >> zeroToSixty;
                    userCar->setIsSlow(zeroToSixty);
                    
                    cout << userCar->getIsSlow() << endl;

                }
                case lev:
                {
                    break;
                }
                case moped:
                {
                    Moped moped;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    moped.setMake(make);

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    moped.setModel(model);

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    moped.setColor(color);

                    bool inFrat;
                    cout << "Are you in a Fraterity? (1 for yes, 0 for no)" << endl;
                    cin >> inFrat;
                    moped.setInFrat(inFrat);

                    int engineSize;
                    cout << "What is the size of your engine (cc's)" << endl;
                    cin >> engineSize;
                    moped.setEngineSize(engineSize);

                    break;
                }
                case motorcycle:
                {
                    break;
                }
                default:
                {
                    cout << "Unknown Input" << endl;
                    return 1;
                }
            }

            break;
        }
        case vendor:
        {
            Vendor vendor;

            string nameF;
            string nameL;
            cout << "What is your first name?" << endl;
            cin >> nameF;
            cout << "What is your last name?" << endl;
            cin >> nameL;
            vendor.setName(nameF+" "+nameL);

            cout << vendor.getName() << endl;

            std::cin.ignore();
            string address;
            cout << "What is your address?" << endl;
            getline(cin, address);
            vendor.setAddress(address);

            cout << vendor.getAddress() << endl;

            string email;
            cout << "What is your email address?" << endl;
            cin >> email;
            vendor.setEmail(email);

            cout << vendor.getEmail() << endl;

            int hoursOfService;
            cout << "How many hours do you plan on being on campus?" << endl;
            cin >> hoursOfService;
            vendor.setHoursOfService(hoursOfService);

            cout << vendor.getHoursOfService() << endl;

            string company;
            cout << "What company or business are you here for?" << endl;
            cin >> company;
            vendor.setCompany(company);

            cout << vendor.getCompany() << endl;

            cout << "Do you drive a car/truck/suv(1), low-emission vehicle(2), moped(3), or motorcycle(4)?" << endl;
            cin >> buf;
            userVeh = (vehType)buf;

            switch (userVeh)
            {
                case car:
                {
                    Car *userCar = new Car;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    userCar->setMake(make);

                    cout << userCar->getMake() << endl;

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    userCar->setModel(model);

                    cout << userCar->getModel() << endl;

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    userCar->setColor(color);

                    cout << userCar->getColor() << endl;

                    int year;
                    cout << "What is your vehicle year?" << endl;
                    std::cin >> year;
                    userCar->setYear(year);

                    cout << userCar->getYear() << endl;

                    double zeroToSixty;
                    cout << "What is your vehicle's 0-60 time in seconds?" << endl;
                    std::cin >> zeroToSixty;
                    userCar->setIsSlow(zeroToSixty);
                    
                    cout << userCar->getIsSlow() << endl;

                }
                case lev:
                {
                    break;
                }
                case moped:
                {
                    Moped moped;

                    string make;
                    cout << "What is your vehicle make?" << endl;
                    std::cin >> make;
                    moped.setMake(make);

                    string model;
                    cout << "What is your vehicle model?" << endl;
                    std::cin >> model;
                    moped.setModel(model);

                    string color;
                    cout << "What is your vehicle color?" << endl;
                    std::cin >> color;
                    moped.setColor(color);

                    bool inFrat;
                    cout << "Are you in a Fraterity? (1 for yes, 0 for no)" << endl;
                    cin >> inFrat;
                    moped.setInFrat(inFrat);

                    int engineSize;
                    cout << "What is the size of your engine (cc's)" << endl;
                    cin >> engineSize;
                    moped.setEngineSize(engineSize);

                    break;
                }
                case motorcycle:
                {
                    Motorcycle motorcycle; 
                    string make; 
                    cout << "What is the make of your motorcycle?" << endl; 
                    std:: cin >> make; 
                    motorcycle.setMake(make);

                    string model; 
                    cout << "What is the model of your motorcycle?" << endl; 
                    std::cin >> model; 
                    motorcycle.setModel(model);

                    string color; 
                    cout << "What color is your motorcycle?" << endl; 
                    std:: cin >> color; 
                    motorcycle.setColor(color);

                    int headlights;
                    cout << "How many headilghts does your motorcycle have?" << endl; 
                    std::cin >> headlights;
                    motorcycle.setHeadlights(headlights);

                    string fuel;
                    cout << "What do you use to power your motorcycle?" << endl; 
                    std::cin >> fuel; 
                    motorcycle.setFuel(fuel);
                    break;
                }
                default:
                {
                    cout << "Unknown Input" << endl;
                    return 1;
                }
            }

        }
        default:
        {
            cout << "Unknown Input" << endl;
            return 1;
        }
    }


    return 0;
}

/*
int makeInvoice(Invoice userInvoice, int fees, 
{

}
*/