#include<iostream>
using namespace std;

//The first line is function signature, tells whether the function returns something or not, and if does, tells its type

// int power(int a, int b){
    //function body
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int power2(){
//     int a, b;
//     cout<<"Enter the values of a and b ";
//     cin>>a>>b;

//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     cout<<"The "<<b<<"th power of "<<a<<" is "<<ans;
//     return ans;
// }

//Factorial function

    // function call
    // int factorial(int n){
    //     int ans = 1;
    //     for(int i = n; i > 0; i--){
    //         ans *= n;
    //         n--;
    //     }
    //     return ans;
    // }
    //Alternate
    int factorial(int n){
        int ans = 1;
        for(int i = 1; i <= n; i++){
            ans = ans * i;
        }
        return ans;
    }

//nCr
    int nCr(int n, int r){
        return factorial(n)/(factorial(r) * factorial(n - r));
    }

//AP
// = (3 * n) + 7

    int ap(int n){
        return (3 * n) + 7;
    }

//Function to give the total number of set bits from input of two numbers
    int set_bit_counter(int n){
        int count = 0;
        while(n != 0){
            if(n & 1 == 1){
            count++;
            }
            n = n>>1;
        }
        return count;
        cout<<count;
    }
    int set(int n1, int n2){
        return set_bit_counter(n1) + set_bit_counter(n2);
    }

int main(){
    // int p = power(2, 3);
    // cout<<p<<endl;

    // power2();

    // cout<<"The factorial of 5 is "<<factorial(5)<<endl;
    // cout<<"The factorial of 6 is "<<factorial(6)<<endl;

    // cout<<"The nCr value of 8C2 is "<<nCr(8, 2)<<endl;

    // cout<<"The 2th term of given AP is "<<ap(2)<<endl;

    // cout<<"The number of set bits in 2 and 3 is "<<set(2, 3)<<endl;

// Pass by value
// The value that gets sent to function is a copy of the value, for example, if a function dummy just increments a number and this number is defined in main(),
// if the dummy function prints n++ and the main function also prints n, the value output from main will be n only, not the incremented one from function
//The new value created does take extra space, though it is a copy of the param

    return 0;
}