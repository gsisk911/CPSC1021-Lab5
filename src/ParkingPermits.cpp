#include <iostream>
#include <sstream>
#include "student.h"
#include "car.h"

using namespace std;

enum customerType { employee = 1, student, visitor, vendor};
enum vehType { car = 1, lev, moped, motorcycle};
enum passType { commuterP = 1, residentP, teacherP, visitorP, vendorP, motorcycleP };

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
        }
        case visitor:
        {
            break;
        }
        case vendor:
        {
            break;
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