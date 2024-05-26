#include<iostream>
using namespace std;

int add(int a, int b){          //Formal parameters
    int c = a + b;
    return c;
}

//Default values can be given, they make function workable with less input arguments also.

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_Pointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//inline int product(int a, int b){         //These are used to expand functions where they are called(calling is similar to normal functions). This can be done for functions with less lines of code, it'll save execution time, shouldn't be used for functions with more lines of code.
//Normally when function is called it copies the value in the prototype and returns a value according to function code. This is shortened using inline functions.

//Recursive functions
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

//Function can be defined for different set of arguments, the name can be same but the data type and the sequence of arguments need to be different
// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}


int main(){

// int to_store = add(34, 66);     //actual parameters
// cout<<to_store<<endl;


// int num1, num2, result;
// cout<<"Enter a number: ";
// cin>>num1;
// cout<<"Enter another number: ";
// cin>>num2;
// result = add(num1, num2);
// cout<<result<<endl;
// // or
// cout<<"Their sum is: "<<add(num1, num2);

int a = 23, b = 45;
cout<<"value of a: "<<a<<endl;
cout<<"value of b: "<<b<<endl;
swap(a, b);
cout<<"value of a: "<<a<<endl;      //no change in values because copies of variables is sent to functions, for changing values pointers to be used
cout<<"value of b: "<<b<<endl;      //this is call by value

cout<<endl;
cout<<endl;
cout<<endl;

//Call by reference

int c = 23, d = 45;
cout<<"value of c: "<<c<<endl;
cout<<"value of d: "<<d<<endl;
swap_Pointer(&c, &d);
cout<<"value of c: "<<c<<endl;
cout<<"value of d: "<<d<<endl;

cout<<endl;
cout<<endl;
cout<<endl;

//Using swapReferenceVar function       //The point being, value is altered when pointers are used.
int x = 23, y = 45;
cout<<"value of x: "<<x<<endl;
cout<<"value of y: "<<y<<endl;
swapReferenceVar(x, y);
cout<<"value of x: "<<x<<endl;
cout<<"value of y: "<<y<<endl;

//Same function name but different set of arguments
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;

// Values and functions can be declared static, static functions cannot have non static values. (Example-> static int a;
// static void functiona(){} and these functions/methods can only be accessed using scope resolution operator as->class_name::function_which_is_defined_in_class, like-> names::get_data(); //and not name1.get_data).
// Declaring a static variable makes the variable retain its value, it doesn't reset with each call.

//friend functions are not in scope of class, can be declared without object.function_name() syntax like sum = function_name();
//Can be defined under public as well as private modifiers and usually contains ojects as arguments.
//Cannot access members directly by their names, needs (object_name.member_name) to access.
//Used along class in C++_Classes_Objects.cpp


    return 0;
}