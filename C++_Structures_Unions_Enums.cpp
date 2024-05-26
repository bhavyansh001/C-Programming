#include<iostream>
#include<string>

using namespace std;

// struct student{
//     int id;
//     float R_num;
// };

// typedef struct student{
//     int id;
//     float R_num;
// } stu;

// union money{
//     int bike;
//     float car;
// };

int main(){
//Structure
    // struct student Rohan;
    // Rohan.id = 233;
    // Rohan.R_num = 45.78;

//Structure using typedef
    // stu Rohan; 
    // Rohan.id = 456;
    // Rohan.R_num = 89.77;

    // cout<<Rohan.R_num;

//Union
    // union money a; //like structures, better at memory management, but only one variable can be used at a time
    // a.bike = 90000;
    // //if a.car also set the output will be garbage value

    // cout<<a.bike;

//Emums
    // enum name{Apple, Banana, Orange};
    // name f1 = Apple;
    // name f2 = Banana;
    // name f3 = Orange;

    // cout<<f1<<endl; //gives index as output
    // cout<<f2<<endl;
    // cout<<f3;

    return 0;
}