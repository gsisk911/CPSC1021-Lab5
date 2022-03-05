#ifndef __invoice_h__
#define __invoice_h__
#include <iostream>
#include "car.h"
#include "LowEmission.h"
#include "Moped.h"
#include "motorcycle.h"
#include "student.h"
#include "Teacher.h"
#include "vendor.h"
#include "Visitor.h"
using namespace std;

class Invoice
{
    public:
        Invoice() = default;
        void setPricePermit(int price);
        void setServiceCharge(int charge);
        void setDiscount(int discount);
        int getPricePermit();
        int getServiceCharge();
        int getDiscount();
        int calcPrice();
        void printOut(Student student, Car car);
        void printOut(Student student, LowEmission lowEmission);
        void printOut(Student student, Moped moped);
        void printOut(Student student, Motorcycle motorcycle);
        void printOut(Teacher teacher, Car car);
        void printOut(Teacher teacher, LowEmission lowEmission);
        void printOut(Teacher teacher, Moped moped);
        void printOut(Teacher teacher, Motorcycle motorcycle);
        void printOut(Visitor visitor, Car car);
        void printOut(Visitor visitor, LowEmission lowEmission);
        void printOut(Visitor visitor, Moped moped);
        void printOut(Visitor visitor, Motorcycle motorcycle);
        void printOut(Vendor vendor, Car car);
        void printOut(Vendor vendor, LowEmission lowEmission);
        void printOut(Vendor vendor, Moped moped);
        void printOut(Vendor vendor, Motorcycle motorcycle);

    private:
        int pricePermit {0};
        int serviceCharge {0};
        int discount {0};

};

#endif