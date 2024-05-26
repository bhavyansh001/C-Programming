#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
// Bitwise operators

// And &
// Or |
// Not ~
// Xor ^

// (10 and 01)
// int a = 2&1;
// cout<<a<<endl;
// int o = 2|1;
// cout<<o<<endl;
// int n = ~1;
// cout<<n<<endl;
// int x = 2^1;
// cout<<x<<endl;

// int takes 4 bytes (32 bits)

// int a = 2;

// ~a = 11111111111111111111111111111101
// (So in case of inverse, the initial zeroes are also to be considered)

// cout<<~a;

// Negative number is printed by taking 2s complement (we know of it being negative as the first bit is negative)

// Since first bit is 1 so answer will be negative
// Taking 2s complement of remaining gives
// 000...00011
// So answer is -3

// Right shift >>
// 12 >> 2
// 1100 shifted 2 times to the right
// Becomes 0011 (3)

// 101 >> 1
// Is 
// 010

// Left shift
// 12<< 2
// 1100 - 110000 (48)

// >> 1 divides by 2

// << 1 multiplies by 2

// 3 << 2 is 6
// So << multiplies in majority cases but not always because it can create negative number in some cases if the first bit becomes 1 due to shifting

// (01)
// int rs = 1>>2;
// cout<<rs<<endl;
// int ls = 1<<2;
// cout<<ls<<endl;


// For positive numbers, padding is given by 0s
// (0 occupies the new places)
// For negative numbers, padding depends on the compiler


// ++i pre increment
// i++ post increment

// --i pre decrement
// i-- post decrement

// int a, b = 1;
// a = 10;

// if(++a)         //This condition will be always true
// cout<< b;

// else
// cout<< (++b);

// int a = 1, b =2;
// if(a-- > 0 || ++b > 2){     //value of a will be used first then it'll be decremented, the second condition won't execute as the first one of || is already true, no need for the second one to be true, so it won;t execute. If && is used in place of ||, the second condition will also be evaluated and the value of b will be first incremented then used
// cout<<"Stage 1, inside if"<<endl;
// }
// else{
// cout<<"Stage 2, inside else"<<endl;
// }
// cout<<a<<" "<<b<<endl;

// n ^ n = 0
// N ^ 0 = N

// int n = 2;
// n = n ^ n; 
// cout<<n<<endl;
// n = 2;
// n = n ^ 0;
// cout<<n<<endl;


// Masking with 1
// Means anding the number with 1
// Better than modulus operation to tell if the number is odd or even

// 101
// 001 (anding)
// Gives - 001 so odd

// 100
// 001 (anding)
// Gives- 000 so even

// Swapping a and b
// int a = 2;
// int b = 1;
// a = a ^ b;
// b = a ^ b;
// a = a ^ b;

// cout<<a<<endl<<b<<endl;

// Find ith bit
// Mask with 1<< i times
// Then and

//Find the 1st bit of 7
//7 = 0111;
//    3210  position

// int a = 7;
// int mask = 1 << 1;  //1 time shifting will give the bit at 2nd position
// int ans = a & mask;

// if(ans == 0){
//     cout<<"The bit at given index is 0";
// }
// else{
//     cout<<"The bit at given index is 1";
// }

// Set ith bit (set means 1, reset = 0)
// Mask = 1<< i times
// Then or


// Set the third bit of 7 (hence the answer should be 15)
// int a = 7;
// int i = 1<<3;
// int c = a | i;
// cout<<c;

// Clear/Reset ith bit
// 1 << i times
// Then invert~ to get the required mask
//Then and the number with mask

//Clear/Reset 1st bit
// int a = 7;
// int i = 1<<1;
// int c = a & ~i;
// cout<<c;


// Find number of places(bits) to change to convert a number
// 1101
// To 1001

// int a = 13;
// int b = 9;

// int c = a ^ b;
// cout<<c<<endl;
// Now the problem is to find the number of 1s
// To calculate number of 1s-
// Keep right shifting the number(till number becomes zero) and increase int count if last digit = 1
// This will give the number of 1s, but the time complexity will be-
// O(log n)

// To reduce O, (this trick is widely used in CP)
// And n with n - 1 till the number becomes zero
// 1101 & 1100 - 1100
// 1100 & 1011 - 1000
// 1000 & 0111 - 0000

// So 3 ones exist

// O = number of set bits

// int count = 0;
// while(c > 0){
//     count++;
//     c = c & (c-1);
// }
// cout<<"The number of bits to be changed is "<<count;


// n ^ n = 0
// N ^ 0 = N

//Question 1:
//A number is given, find the difference of the product of digits and the sum of digits
    // int n = 45;
    // int sum = 0, product = 1;

    // while(n != 0){      ////To get the digits-
    // // n % 10 gives the last digit
    // // then divide by 10 to get new number that is devoid of the last digit
    //     int last_digit = n % 10;
    //     sum += last_digit;
    //     product *= last_digit;
    //     n = n / 10;
    // }
    // cout<<product - sum;


//Question 2:
//Find the number of set bits
//     unsigned int n = 15;
//     int count = 0;
//     while(n != 0){
//         n &= n-1;
//         count++;
//     }
//     cout<<"The number has "<<count<<" set bits";
// //Already available as-    
//     cout<<__builtin_popcount(15);

//Recursive approach in a function-
    // int countSetBits(int n)
    // {
    //     // base case
    //     if (n == 0)
    //         return 0;
    //     else
    //         // if last bit set add 1 else add 0
    //         return (n & 1) + countSetBits(n >> 1);
    // }    

//Question 3:
//Decimal to Binary
    // int n = 8;
    // int ans = 0;
    // int i = 0;
    // while(n != 0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;     //included math.h
    //     n = n >> 1;
    //     i++;
    // }        //should be modified later (using array/string)
    // cout<<"The number in binary is "<<ans<<endl;

//Question 4:
//Binary to Decimal
    // int n = 1111;
    // int ans = 0;
    // int i = 0;
    // while(n != 0){
    // int digit = n % 10;
    //     if(digit == 1){
    //     ans = ans + pow(2, i);
    //     }
    //     n = n / 10;
    //     i++;
    // }
    // cout<<"The decimal representation is "<<ans<<endl;

//Question 5:
//Reversing integer (if crosses integer range[pow(-2, 31) to pow(2, 31) - 1], give 0 as output)
    // int n = 12534;
    // int ans = 0;
    // while(n != 0){
    //     if(ans > INT_MAX/10 || ans < INT_MIN/10){     //included <climits>
    //         ans = 0;        //since ans * 10 > INT_MAX or ans * 10 < INT_MIN
    //     }
    //     else{
    //     int digit = n % 10;
    //     ans = (ans * 10) + digit;
    //     n = n / 10;
    //     }
    // }
    // cout<<"Reversed integer is "<<ans;

//Question 6:
//Compliment of base 10 int
    // int n = 2;
    // int m = n;
    // int mask = 0;
    // int ans;
    // if(n == 0){     //edge case
    //     ans = 1;
    // }
    // while(m != 0){
    //     mask = (mask<<1) | 1;
    //     m = m>>1;
    // }
    // ans = (~n) & mask;

    // cout<<ans;

//Question 7:
//Power of 2? Say true or false
    // int n = 64;
    // bool param = false;
    // for(int i = 0; i <= 30; i++){       //last value not taken since the upper limit of integers is 2 raised to 31 - 1
    //     int ans = pow(2, i);
    //     if(ans == n){
    //         param = true;
    //     }
    // }        //used brute-force here
    // if(param)
    //     cout<<"True";
    // else
    //     cout<<"False";
//Alternate way-(better)

    // // int n = 2;
    // int n = 1073741824;
    // bool param = false;
    // int ans = 1;
    // for(int i = 0; i <= 30; i++){
    //     if(ans == n){
    //         param = true;
    //     }
    //     ans = ans * 2;
    // }
    // if(param)
    //     cout<<"True";
    // else
    //     cout<<"False";

//Question 8:
// Find the non-repeating element from an array in which each element repeats twice
// A = {5, 4, 1, 4, 3, 5, 1}

    // int A[] = {5, 4, 1, 4, 3, 5, 1};
    // int result = 0;

    // int i = 0;
    // while (i < 7){
    //     result = result ^ A[i];
    //     i++;
    // }
    // cout<<"The only non-repeating digit is "<<result;


//Question 9:
// Find the two non-repeating elements from an array in which each element repeats twice
// A = {5, 4, 1, 4, 3, 5, 1, 2}

    // int A[] = {5, 4, 1, 4, 3, 5, 1, 2};
    // int result = 0;
    // int i = 0;
    // while(i < 8){       //proceeding as in last question, exoring to find the result
    //     result = result ^ A[i];
    //     i++;
    // }
    // int temp = result;  //storing result in temp for later use
    // int part_of_array[10] = {0};

    // int j = 0, k = 0, z;    //j is iterator for A, k is for part_of_array and z is for storing the modulus(providing directly to if condition as: if(A[j] & 1 == 0) doesn't work)
    // while(j < 8){
    //     z = A[j] & 1;
    //     if(z == 0){         //== 0 or == 1 tells the part stored(odd part or even part)
    //         part_of_array[k] = A[j];
    //     j++;
    //     k++;
    //     }
    //     else{
    //         j++;
    //     }
    // }

    // int l = 0;
    // while(l < 8){       //finally exoring result with part_of_array to get one of the values.
    //     result = result ^ part_of_array[l];
    //     l++;
    // }
    // temp = temp ^ result;   //could be stored in another variable but would just increase space, so stored in temp itself

    // cout<<"First non-repeating digit is "<<result<<endl;
    // cout<<"Second non-repeating digit is "<<temp<<endl;

//Question 10:
// Find the only non-repeating element from an array in which each element repeats thrice
// A = {2, 2, 1, 5, 1, 1, 2}

    // Step 1- D to B
    // Step 2- Add
    // Step 3- Modulus with 3 of each digit

    // int A[] = {2, 2, 1, 5, 1, 1, 2};
    // int j = 0;
    // int sum = 0;

    // int ans = 0;
    // while(j < 7){
    // //Code for D to B-
    //     int n = A[j];
    //     int i = 0;
    //     while(i < 7){
    //         //defining a special edge case as D to B for 5 is giving 100 instead of 101
    //             if(n == 5){
    //                 ans = ans + 2;
    //             }
    //             else{
    //                 int bit = n & 1;
    //                 ans = (bit * pow(10, i)) + ans;
    //             }
    //                 n = n >> 1;
    //                 i++;
    //     }
    //     j++;
    // }
    // // Now that we have the sum, the next step is to take modulus of digits with 3

    // // Code for reversing integer used as the digit taken will be from the right most end
    // int n = ans;
    // int rev = 0;
    // while(n != 0){
    //     int digit = n % 10;
    //     digit = digit % 3;
    //     rev = (rev * 10) + digit;
    //     n = n / 10;
    // }

    // // Now the binary number is to be converted to decimal again
    // int final_ans = 0;
    // int i = 0;
    // while(rev != 0){
    // int digit = rev % 10;
    //     if(digit == 1){
    //     final_ans = final_ans + pow(2, i);
    //     }
    //     rev = rev / 10;
    //     i++;
    // }

    // cout<<"The only non-repeating digit is "<<final_ans;

    return 0;
}