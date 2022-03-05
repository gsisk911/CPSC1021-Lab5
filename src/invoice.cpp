#include <iostream>
#include "car.h"
#include "LowEmission.h"
#include "Moped.h"
#include "motorcycle.h"
#include "student.h"
#include "Teacher.h"
#include "vendor.h"
#include "Visitor.h"
#include "invoice.h"
using namespace std;

void Invoice::setPricePermit(int price) {
    pricePermit = price;
}
void Invoice::setServiceCharge(int charge) {
    serviceCharge = charge;
}
void Invoice::setDiscount(int d) {
    discount = d;
}
int Invoice::getPricePermit() {
    return pricePermit;
}
int Invoice::getServiceCharge() {
    return serviceCharge;
}
int Invoice::getDiscount() {
    return discount;
}

int calcPrice(int pricePermit, int serviceCharge, int discount) {
    return pricePermit + serviceCharge - discount;
}

void printOut(int price, Student student, Car car) {
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "CUID: " << student.getCUID() << endl;
    cout << "Resident building: " << student.getResidentBuilding() << endl;

    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "Year: " << car.getYear() << endl;
    if (car.getIsSlow() == true) {
        cout << "Your car is slow." << endl;
    }
    else {
        cout << "Your car is fast." << endl;
    }
    
    cout << "Price of permit: $" << price << endl;

}
void printOut(int price, Student student, LowEmission lowEmission) {
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "CUID: " << student.getCUID() << endl;
    cout << "Resident building: " << student.getResidentBuilding() << endl;

    cout << "Make: " << lowEmission.getMake() << endl;
    cout << "Model: " << lowEmission.getModel() << endl;
    cout << "Color: " << lowEmission.getColor() << endl;
    cout << "License plate: " << lowEmission.getPlate() << endl;
    cout << "Type: " << lowEmission.getType() << endl;

    cout << "Price of permit: $" << price << endl;

}
void printOut(int price, Student student, Moped moped) {
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "CUID: " << student.getCUID() << endl;
    cout << "Resident building: " << student.getResidentBuilding() << endl;

    cout << "Make: " << moped.getMake() << endl;
    cout << "Model: " << moped.getModel() << endl;
    cout << "Color: " << moped.getColor() << endl;
    cout << "Engine Size: " << moped.getEngineSize() << "cc" << endl;
    if (moped.getInFrat() == true) {
        cout << "You are in a frat." << endl;
    }
    else {
        cout << "Your are not in a frat." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Student student, Motorcycle motorcycle) {
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Email: " << student.getEmail() << endl;
    cout << "CUID: " << student.getCUID() << endl;
    cout << "Resident building: " << student.getResidentBuilding() << endl;

    cout << "Make: " << motorcycle.getMake() << endl;
    cout << "Model: " << motorcycle.getModel() << endl;
    cout << "Color: " << motorcycle.getColor() << endl;
    cout << "You have " << motorcycle.getHeadlights() << "headlights." << endl;
    cout << "Fuel type: " << motorcycle.getFuel() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Teacher teacher, Car car) {
    cout << "Name: " << teacher.getName() << endl;
    cout << "Address: " << teacher.getAddress() << endl;
    cout << "Email: " << teacher.getEmail() << endl;
    cout << "Department: " << teacher.getDepartment() << endl;
    cout << "Username: " << teacher.getUser() << endl;

    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "Year: " << car.getYear() << endl;
    if (car.getIsSlow() == true) {
        cout << "Your car is slow." << endl;
    }
    else {
        cout << "Your car is fast." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Teacher teacher, LowEmission lowEmission) {
    cout << "Name: " << teacher.getName() << endl;
    cout << "Address: " << teacher.getAddress() << endl;
    cout << "Email: " << teacher.getEmail() << endl;
    cout << "Department: " << teacher.getDepartment() << endl;
    cout << "Username: " << teacher.getUser() << endl;

    cout << "Make: " << lowEmission.getMake() << endl;
    cout << "Model: " << lowEmission.getModel() << endl;
    cout << "Color: " << lowEmission.getColor() << endl;
    cout << "License plate: " << lowEmission.getPlate() << endl;
    cout << "Type: " << lowEmission.getType() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Teacher teacher, Moped moped) {
    cout << "Name: " << teacher.getName() << endl;
    cout << "Address: " << teacher.getAddress() << endl;
    cout << "Email: " << teacher.getEmail() << endl;
    cout << "Department: " << teacher.getDepartment() << endl;
    cout << "Username: " << teacher.getUser() << endl;

    cout << "Make: " << moped.getMake() << endl;
    cout << "Model: " << moped.getModel() << endl;
    cout << "Color: " << moped.getColor() << endl;
    cout << "Engine Size: " << moped.getEngineSize() << "cc" << endl;
    if (moped.getInFrat() == true) {
        cout << "You are in a frat." << endl;
    }
    else {
        cout << "Your are not in a frat." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Teacher teacher, Motorcycle motorcycle) {
    cout << "Name: " << teacher.getName() << endl;
    cout << "Address: " << teacher.getAddress() << endl;
    cout << "Email: " << teacher.getEmail() << endl;
    cout << "Department: " << teacher.getDepartment() << endl;
    cout << "Username: " << teacher.getUser() << endl;

    cout << "Make: " << motorcycle.getMake() << endl;
    cout << "Model: " << motorcycle.getModel() << endl;
    cout << "Color: " << motorcycle.getColor() << endl;
    cout << "You have " << motorcycle.getHeadlights() << "headlights." << endl;
    cout << "Fuel type: " << motorcycle.getFuel() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Visitor visitor, Car car) {
    cout << "Name: " << visitor.getName() << endl;
    cout << "Address: " << visitor.getAddress() << endl;
    cout << "Email: " << visitor.getEmail() << endl;
    cout << "Number of days visiting: " << visitor.getDays() << endl;
    if (visitor.getOnTour() == true) {
        cout << "You are on a tour." << endl;
    }
    else {
        cout << "You are not on a tour." << endl;
    }

    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "Year: " << car.getYear() << endl;
    if (car.getIsSlow() == true) {
        cout << "Your car is slow." << endl;
    }
    else {
        cout << "Your car is fast." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Visitor visitor, LowEmission lowEmission) {
    cout << "Name: " << visitor.getName() << endl;
    cout << "Address: " << visitor.getAddress() << endl;
    cout << "Email: " << visitor.getEmail() << endl;
    cout << "Number of days visiting: " << visitor.getDays() << endl;
    if (visitor.getOnTour() == true) {
        cout << "You are on a tour." << endl;
    }
    else {
        cout << "You are not on a tour." << endl;
    }

    cout << "Make: " << lowEmission.getMake() << endl;
    cout << "Model: " << lowEmission.getModel() << endl;
    cout << "Color: " << lowEmission.getColor() << endl;
    cout << "License plate: " << lowEmission.getPlate() << endl;
    cout << "Type: " << lowEmission.getType() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Visitor visitor, Moped moped) {
    cout << "Name: " << visitor.getName() << endl;
    cout << "Address: " << visitor.getAddress() << endl;
    cout << "Email: " << visitor.getEmail() << endl;
    cout << "Number of days visiting: " << visitor.getDays() << endl;
    if (visitor.getOnTour() == true) {
        cout << "You are on a tour." << endl;
    }
    else {
        cout << "You are not on a tour." << endl;
    }

    cout << "Make: " << moped.getMake() << endl;
    cout << "Model: " << moped.getModel() << endl;
    cout << "Color: " << moped.getColor() << endl;
    cout << "Engine Size: " << moped.getEngineSize() << "cc" << endl;
    if (moped.getInFrat() == true) {
        cout << "You are in a frat." << endl;
    }
    else {
        cout << "Your are not in a frat." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Visitor visitor, Motorcycle motorcycle) {
    cout << "Name: " << visitor.getName() << endl;
    cout << "Address: " << visitor.getAddress() << endl;
    cout << "Email: " << visitor.getEmail() << endl;
    cout << "Number of days visiting: " << visitor.getDays() << endl;
    if (visitor.getOnTour() == true) {
        cout << "You are on a tour." << endl;
    }
    else {
        cout << "You are not on a tour." << endl;
    }

    cout << "Make: " << motorcycle.getMake() << endl;
    cout << "Model: " << motorcycle.getModel() << endl;
    cout << "Color: " << motorcycle.getColor() << endl;
    cout << "You have " << motorcycle.getHeadlights() << "headlights." << endl;
    cout << "Fuel type: " << motorcycle.getFuel() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Vendor vendor, Car car) {
    cout << "Name: " << vendor.getName() << endl;
    cout << "Address: " << vendor.getAddress() << endl;
    cout << "Email: " << vendor.getEmail() << endl;
    cout << "Company: " << vendor.getCompany() << endl;
    cout << "Hours working: " << vendor.getHoursOfService() << endl;

    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "Year: " << car.getYear() << endl;
    if (car.getIsSlow() == true) {
        cout << "Your car is slow." << endl;
    }
    else {
        cout << "Your car is fast." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Vendor vendor, LowEmission lowEmission) {
    cout << "Name: " << vendor.getName() << endl;
    cout << "Address: " << vendor.getAddress() << endl;
    cout << "Email: " << vendor.getEmail() << endl;
    cout << "Company: " << vendor.getCompany() << endl;
    cout << "Hours working: " << vendor.getHoursOfService() << endl;

    cout << "Make: " << lowEmission.getMake() << endl;
    cout << "Model: " << lowEmission.getModel() << endl;
    cout << "Color: " << lowEmission.getColor() << endl;
    cout << "License plate: " << lowEmission.getPlate() << endl;
    cout << "Type: " << lowEmission.getType() << endl;

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Vendor vendor, Moped moped) {
    cout << "Name: " << vendor.getName() << endl;
    cout << "Address: " << vendor.getAddress() << endl;
    cout << "Email: " << vendor.getEmail() << endl;
    cout << "Company: " << vendor.getCompany() << endl;
    cout << "Hours working: " << vendor.getHoursOfService() << endl;

    cout << "Make: " << moped.getMake() << endl;
    cout << "Model: " << moped.getModel() << endl;
    cout << "Color: " << moped.getColor() << endl;
    cout << "Engine Size: " << moped.getEngineSize() << "cc" << endl;
    if (moped.getInFrat() == true) {
        cout << "You are in a frat." << endl;
    }
    else {
        cout << "Your are not in a frat." << endl;
    }

    cout << "Price of permit: $" << price << endl;
}
void printOut(int price, Vendor vendor, Motorcycle motorcycle) {
    cout << "Name: " << vendor.getName() << endl;
    cout << "Address: " << vendor.getAddress() << endl;
    cout << "Email: " << vendor.getEmail() << endl;
    cout << "Company: " << vendor.getCompany() << endl;
    cout << "Hours working: " << vendor.getHoursOfService() << endl;

    cout << "Make: " << motorcycle.getMake() << endl;
    cout << "Model: " << motorcycle.getModel() << endl;
    cout << "Color: " << motorcycle.getColor() << endl;
    cout << "You have " << motorcycle.getHeadlights() << "headlights." << endl;
    cout << "Fuel type: " << motorcycle.getFuel() << endl;

    cout << "Price of permit: $" << price << endl;
}