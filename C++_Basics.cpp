#include<iostream>
#include<iomanip>
using namespace std;
int z = 26; //A global scope variable, if in a function, z is not defined, it will check the global variables.
int main(){
    // int b;
    // cout<<"Hello World!" <<endl; //"\n" also works
    // cout<<"Enter a number: ";
    // cin>>b;

    // cout<<"You gave input value: "<<b <<endl;  //'<<' is called Insertion operator and '>>' is called Extraction operator
    // cout<<"It's successor: "<<b+1;


// unsigned int a = 11;
// Has only positive values
// If given negative, gives a very big number
// Because MSB is 1 (for negative)
// For negative numbers, 2s complement is taken
// cin.get() gets blank spaces and enter and tab too
// cin doesn't


//Reference variable
    // int x = 455;
    // int &y = x;
    // cout<<x<<"\n";
    // cout<<y;

//Declaring constant
// const int r = 67;
// int s = 578;
// int t = 7820;

// cout<<setw(4)<<r<<endl; //setw sets the width of output, it is used for formatting the output like endl. Requires library iomanip to be included.
// cout<<setw(4)<<s<<endl;
// cout<<setw(4)<<t<<endl;

//Control structures
    // 1. Sequence structure
    // 2. Selection structure (if-else)
    // 3. Loop structure


// int arr[6] = {23, 45, 56, 67, 78, 89};
// arr[3] = 22;
// for(int i = 0; i < 6; i++){
//     cout<<"Element at "<<i<<" place is: "<<arr[i]<<"\n";
// }    

// //Pointer to arrays-
// int* ptr = arr; //and not &arr, in array arr means the first element
// cout<<(*ptr);

// for(int i = 0; i < 6; i++){
//     cout<<"Element at (location derived using pointer) "<<i<<" place is: "<<*(ptr + i)<<"\n"; // *(ptr + i) and not (*ptr + i)!
// }

// char ch = 98;
// cout<< ch;          //->b  (char for which ASCII code is 98)

// int a  = 'a';
// cout<<a;            //->97 (ASCII for 'a')

// int a = 2;
// int b = a+1;

// if((a = 3) == b){       //Initialized a = 3
//     cout<<a;
//     cout<<"In if";
// }
// else{
//     cout<<a + 1;
//     cout<<"In else";
// }

// int n, sum_e = 0;

// cout<<"Enter the value of n: ";
// cin>>n;

// int i = 0;
// while(i <= n){
//     sum_e = sum_e + i;
//     i += 2;
// }
// cout<<"The sum of first n even numbers is: "<<sum_e;

    return 0;
}