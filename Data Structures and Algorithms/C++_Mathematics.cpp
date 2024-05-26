#include <iostream>
using namespace std;

// Finding trailing zeroes in factorial of a number
int trail(int n){
    int result = 0;
    int i;

    for(i = 5; i <= n; i *= 5){
        result += (n/i);
    }
    return result;
}

int main(){
    cout<<trail(11);




    return 0;
}