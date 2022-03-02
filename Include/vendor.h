#ifndef VENDOR_H_
#define VENDOR_H_

class Vendor{
    
    private: 
        string name; 
        string address; 
        string email; 
        string company; 
        int hoursOfService; 
    public:
        string getName(); 
        void setName(string n);
        string getAddress(); 
        void setAddress(string a); 
        string getEmail(); 
        void setEmail(string e); 
        string getCompany(); 
        void getCompany(string c); 
        int hoursOfService()
        void hoursOfService(int h)
}
#endif