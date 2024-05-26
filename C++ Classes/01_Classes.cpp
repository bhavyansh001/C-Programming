#include<iostream>
using namespace std;

class Employee{
    private:
    int a, b;

    public:
    int c, d;

    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

//Nesting of member functions-

class binary{
    private:
    string s;
    void chk_bin(void);

    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>> s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

// Arrays in classes-

class Shop{
    int itemId[10];
    int itemPrice[10];
    int counter;

    public:
    void initCounter(void){
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
//:: scope resolution operator
void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

// Static need not be initialized, it is zero by default 
// Static variable= class variable

class Employee{
    int id;
    int salary;

    public:
    void setId(void){
        salary = 100;
        cout<<"Enter the id: "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id is: "<<id <<endl;
    }
};

int main(){
    // Employee Ram;
    // Ram.d = 20;
    // Ram.setData(23, 45, 67);
    // Ram.getData();

    // binary b;
    // b.read();
    // // b.chk_bin();     //inaccessible since private member
    // b.display();
    // b.ones_compliment();
    // b.display();

    Shop d;
    d.initCounter();
    d.setPrice();
    d.setPrice();
    d.setPrice();
    d.displayPrice();
    
    Employee fb[4];     //Array of objects, will ask four times
    for(int i = 0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}

// The memory is only allocated to the variables of the class when the object is created. Also every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared.