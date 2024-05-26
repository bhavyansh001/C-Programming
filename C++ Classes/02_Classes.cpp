#include <iostream>
#include <string>
using namespace std;

//Forward declaration for error free execution using class calculator
class Complex;

//Friend Classes //Shifted up
class Calculator{
    public:
    int add(int a, int b){
        return a + b;
    }
    int sumrealComplex(Complex, Complex);
    //If this fuction defined here, it will throw error as data of another class is being accessed.
    //To fix give access to sumrealComplex function of class Calculator in class Complex.

    //Still throws errors, to fix-
    //1. forward declare class Complex;
    //2. Just declare in Calculator class, define afterwards.
};

class names{
    public:
    string name;
    int age;
    void get_name();
    void get_age(){
        cout<<"Enter your age: \n";
        cin>>age;
    }
    void display();
    private:
    int number;     //it is private but can be obtained using function display as it is defined inside the class.
}name2, name3; //Objects can be declared here too.

void names::get_name(){
    cout<<"Enter your name: \n";
    cin>>name;
    cout<<"Enter your number: \n";
    cin>>number;
}

void names::display(){
    cout<<"Your name: \n"<<name;
    cout<<"Your age: \n"<<age;
    cout<<"Your number: \n"<<number;
}

class Complex{
    int a, b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    //for friend function (have the right to access the private data members of class even though they are not defined inside the class.)
    friend Complex sumComplex(Complex o1, Complex o2);
    //for friend class
    friend int Calculator :: sumrealComplex(Complex o1, Complex o2);
    void printNumber(){
        cout<<"The complex number is: "<<a <<" + " <<b <<"i" <<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){//a function of Complex type
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
} //This will throw error as it uses data of Complex, to fix it, friend Complex sumComplex defined in class too



int Calculator :: sumrealComplex(Complex o1, Complex o2){
        return (o1.a + o2.a);
}

class Employee{
    public:
//Constructors are ->declared under public modifier
                //    ->automatically invoked on creation of object
                //    ->No return values
                //    ->Can have default arguments
                //    ->Their address can't be referred to
    Employee(void); //Declaration of constructor //Parameters can be provided as well like any other function.
    string name;
    int number;
    void PrintDetails(){
        cout<<"The details are: \nName: "<<name <<"\tNumber: "<<number;
    }
};
Employee :: Employee(void){
    name = "default";
    number = 99; //default arguments can be provided which will be overriden if a value is given to the object, else the default will be printed. Same goes with parameterized constructors, the arguments can have a default value as function(int a = 8, int b, int c = 2);
}

class Complex{
    int a, b;
    public:
    Complex(int, int);

    void printNumber(){
        cout<<a << " + " <<b <<"i"<<"\n";
    }
};
Complex :: Complex(int x, int y){       //could be defined inside the class itself.
    a = x;
    b = y;
}    

int main(){
//     names name1;
// name1.get_name();
// name1.get_age();
// name1.display();

// name2.get_name();
// name2.get_age();
// name2.display();

// name3.get_name();
// name3.get_age();
// name3.display();

// 

// Complex c1, c2, sum;
// c1.setNumber(1, 4);
// c2.setNumber(5, 8);
// c1.printNumber();
// c2.printNumber();

// sum = sumComplex(c1, c2);
// sum.printNumber();


//Friend classes (individually declaring functions as friend)
Complex o1, o2; //hence classes act as data types.
o1.setNumber(1, 4);
o2.setNumber(5, 7);
Calculator calc;
int result = calc.sumrealComplex(o1, o2);
cout<<"Sum of real part is: "<<result<<endl;
//To declare entire class as friend, using friend class Calculator; in parent class. (Complex)

    // Employee e1;
    // e1.name = "one";
    // e1.number = 89;
    // e1.PrintDetails();

    // Employee e2;
    // e2.PrintDetails();

    Complex a(2, 3); //implicit call
    a.printNumber();

    Complex b = Complex(5, 8);
    b.printNumber();

//Constructors can be overloaded just like function overloading, the constructor with matching number of arguments will be invoked.

    return 0;
}