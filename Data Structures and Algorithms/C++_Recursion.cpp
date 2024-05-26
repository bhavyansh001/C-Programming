#include<iostream>
using namespace std;
//Trust the function
//Find a green box, that is, n-1th condition

void say_hello(int n){
    if(n == 0){
        return;
    }
    cout<<"Hello"<<"  "<< n<< endl;
    say_hello(n-1);
}

//Sum of numbers till:

int sum_n(int n){
    if(n == 0)
    return 0;
    int left_part = sum_n(n-1);
    return left_part + n;
}

//Sum of n numbers of a digit:
int sum_digits(int n){
    if(n == 0)
    return 0;
    int last_digit = n % 10;
    int remaining = n / 10;
    return sum_digits(remaining) + last_digit;
}

int main(){
    // say_hello(2);
    // cout<< sum_n(2);
    cout<< sum_digits(92);


    return 0;
}