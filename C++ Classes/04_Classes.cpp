#include<iostream>
using namespace std;
    //Inheritance
        // Single Inheritance
        // Multiple Inheritance
        // Hierarchical Inheritance
        // Multilevel Inheritance
        // Hybrid Inheritance

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
// If the class is inherited in protected mode then its public members are protected and can be accessed in child class.
// To make a virtual base class “virtual” keyword is used
int main(){
    


    return 0;
}