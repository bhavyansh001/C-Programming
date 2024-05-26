#include <iostream>
#include <string>
using namespace std;

int main(){
//     cout<<"Hello world";
//     return 0; //must
// }
/*long
comments*/

// Data types-
// int a, b;
// short, long;
// cannot start with numbers.

// string name = "name"
// string a = "apple";
// cout<<a.at(2);
// short a;
// int b= 9;
// long c;
// long long d;

// float const score = 45.32;
// double score2 = 45.322;
// long double score3 = 45.332;

// 1. Built-in Data Types in C++:
// Int
// Float
// Char
// Double
// Boolean
// 2. User-Defined Data Types in C++:
// Struct
// Union
// Enum
// 3. Derived Data Types in C++:
// Array
// Pointer
// Function
    
// score = 34.2; //can be modified, to make it constant, use int const = or float = etc
// b = 34;
// cout<<"The score is "<<score;]

// Getting user input
// int main()
// {    int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float) a / b<<endl; //make float or double to get in decimal.

    // logical not operator (!(a==b))

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // switch (age)
    // {
    // case 12:     //the case can be int/char; not float/string
    //     cout << "You are 12 years old"<<endl;
    //     break;
    // case '18':   //'' applied just to show how char is used as a case
    //     cout << "You are 18 years old"<<endl;
    //     break;
                    //can be nested too, after : again switch(another case) can be used
    // default:
    //     cout << "You are neither 12 nor 18 years old";
                    //exit() can be used to totally come out of loops
//                     1. exit(0) which is the exit successfully which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
// 2. exit(1) Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.
                    //contine can be used too but it should not be used in switch case
    // }

    // int a, b, op;
    // a= 3;
    // b = 2;
    // op = '+';

    // switch(op){
    //     case '+': cout<<(a+b)<<endl;
    //     break;
    //     case '-': cout<<(a-b)<<endl;
    //     break;
    //     case '*': cout<<(a*b)<<endl;
    //     break;
    //     case '/': cout<<(a/b)<<endl;
    //     break;
    //     default: cout<<"Entries invalid";
    // }

    // int amount;
    // cout<<"Enter the amount for choosing denominations: ";
    // cin>>amount;
    // int Rs100 , Rs50 , Rs20 , Rs1;

    // switch(1){
    //     case 1: Rs100=amount/100;
    //             amount=amount%100;
    //             cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
    //     case 2: Rs50=amount/50;
    //             amount=amount%50;
    //             cout<<"No of 50 Rupee ="<<Rs50<<endl;

    //     case 3: Rs20=amount/20;
    //             amount=amount%20;
    //             cout<<"No of 20 Rupee ="<<Rs20<<endl;

    //     case 4: Rs1=amount/1;
    //             amount=amount%1;
    //             cout<<"No of 1 Rupee ="<<Rs1<<endl; 
    //     }

    // if(age>150 || age<1)
    // {
    //     cout<<"Invalid age";
    // }

    // else if (age>=18){
    //     cout<<"You can vote";
    // }

    // else{
    //    cout<<"You cannot vote";
    // }

    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }

    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 33);

    // for (int i = 1; i <= 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }


/*


//Function
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
// int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<add(a,b);

//Array
// 1-D
    //     int arr[] = {1, 3, 6};
    //     // cout<<arr[1];
    //     int marks[6];

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    //     }
//2-D
    // int arr2d[2][3] = {  {1,2,3},
    //                      {4,5,6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }


//Typecasting
    // int a = 23;
    // float b = 10.22;
    // float c = a/b;
    
    // cout<<(int)c;
    // cout<<int(c);

//String
    // string name = "name1";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(1,15)<<endl; //starting from index 1, will give 15 chars
    // cout<<"The name is "<<name.substr(2,3);

//Pointers (are special data types)
    // float a = 34.34;
    // float* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;     //dereference(value-at) operator
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

*/
    // pointer to pointer
    // float** ptr2;
    // ptr2 = &ptra;

    
// // f(x) = x^2 + 2
// class Employee //placed outside main() method
// {
// public: //private, protected(like private, can be accessed from subclass) also exists, like Ruby
//     string name;
//     int salary; //public parameters can be accessed easily outside the class too.

//     //constructor
//     Employee(string n, int s, int sp)
//     {
//         this->name = n;
//         this->salary = s;
//         this->secretPassword = sp;
//     }

//     void printDetails()
//     {
//         cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary
//          <<Dollars" << endl;
//     }

//     void getSecretPassword()
//     {
//         cout<<"The secret password of employee is "<<this->secretPassword;
//     }

// private:
//     int secretPassword;
// }; //also here the objects can be declared too, as-> } name1, name2, name3;
//Possible that printDetails could be just declared in the class as - void printDetails();
// then defined later using scope resolution operator as- 
// void Employee :: printDetails(){
//  cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary<<Dollars" << endl;
// }

// //Inheritance
// class Programmer : public Employee
// {
//     public:
//         int errors;
        
// }; //; after class!
//     Employee har("Harry constructor", 344, 324432);
//     // har.name = "harry";
//     // har.salary = 100;
//     har.printDetails();
//     har.getSecretPassword();
//     // cout<<har.secretPassword;
//     // cout<<"The name of our first employee is "<< har.name << " and his salary is "<<har.salary<<" Dollars"<<endl; //not required after making printDetails function.

    return 0;
}