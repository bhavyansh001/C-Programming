#include<iostream>
using namespace std;

int main(){

    // int n;
    // //First loop for rows and second for columns
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int i = 1, j = 1;
    // while(i <= n){
    // while(j <= n){
    //     cout<<j;        //n -j + 1 for reversed order
    //     j++; 
    // }
    //     cout<<endl;
    //     i++;
    //     j = 1;          //Had to reinitialize, alternative- initialize as int j = 1 inside the first while loop
    // }


    //123
    //456
    //789

    //row = 3
    //col = 3
    //formula - simple counting

    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= n){
    //     cout<<count<<"\t";
    //     count++;        
    //     j++; 
    // }
    //     cout<<endl;
    //     i++;
    // }

    // *
    // **
    // ***
    //row = 3
    //column = i

    // int n = 5;
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col<= row){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // 1
    // 22
    // 333
    // 4444
    //relation - row number is printed

    // int n = 4;
    
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //     cout<<row<<"\t";
    //     col++;
    //     }
    //     cout<<endl;
    //     row++;           //no need of col_num here
    // }

    // 1
    // 23
    // 456
    // 78910

    // int n = 4;
    
    // int row = 1;
    // int col_num = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //     cout<<col_num<<"\t";
    //     col++;
    //     col_num++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // 1
    // 23
    // 345
    // 4567

    // int n = 4;
    // int row = 1;

    // while(row <= n){
    // int value = row;
    //     int col = 1;
    //     while(col <= row){
    //         cout<<value;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // 1
    // 21
    // 321
    // 4321

    // int n = 4;
    // int row = 1;

    // while(row <= n){
    // int value = row;
    //     int col = 1;
    //     while(col <= row){
    //         cout<<value;
    //         col++;
    //         value--;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //alternative

    // int n = 15;
    // int row = 1;

    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout<<row - col + 1<<"\t";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    //AAA
    //BBB
    //CCC

    //row = 3
    //col = 3
    //formula - simple counting

    // int n = 3;
    // int i = 1;
    // char ch = 65;
    // while(i <= n){
    //     int j = 1;
    // while(j <= n){
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    //     ch++;
    // }

    //Alternative

    // int n = 5;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= n){
    //     char ch = 'A' + i - 1;
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }


    // ABC
    // ABC
    // ABC


    // int n = 5;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= n){
    //     char ch = 'A' + j - 1;
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }



    // ABC
    // BCD
    // CDE
    //formula -> row + col - 1

    // int n = 3;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= n){
    //     char ch = 'A' + i + j - 2;
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }

    //Alternative-
    // int n = 3;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char start = 'A' + i - j;
    // while(j <= n){
    //     cout<<start<<"\t";
    //     start = start + 1;
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }

    // A
    // BB
    // CCC    

    // int n = 3;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= i){
    //     char ch = 'A' + i - 1;
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }

    // A
    // BC
    // CDE
    // DEFG

    // int n = 5;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    // while(j <= i){
    //     char ch = 'A' + i + j - 2;
    //     cout<<ch<<"\t";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }


    // D
    // CD
    // BCD
    // ABCD
    //starting char = 'A' + n - i

    // int n = 3;
    // int i = 1;
    // while(i <= n){
    //     int j = 1;
    //     char start = 'A' + n - i;
    // while(j <= i){
    //     cout<<start<<"\t";
    //     start++;
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }
    

    //     *
    //    **
    //   ***
    //  ****

    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //     //Print space
    //     int space = n - i;
    //     while(space){       //printing space times
    //         cout<<" ";
    //         space--;
    //     }
    //     //print stars
    //     int j = 1;
    // while(j <= i){
    //     cout<<"*";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }


    // ****
    // ***
    // **
    // *
    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //     int star = n - i + 1;
    //     int j = 1;
    // while(j <= star){
    //     cout<<"*";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }


    // ****
    //  ***
    //   **
    //    *
    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //      int space = 0;
    //     while(space < i - 1){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    // while(j <= n - i + 1){
    //     cout<<"*";
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }

    // 1111
    //  222
    //   33
    //    4
    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //      int space = 0;
    //     while(space < i - 1){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    // while(j <= n - i + 1){
    //     cout<<i;
    //     j++;
    // }
    //     cout<<endl;
    //     i++;
    // }



    // 1234
    //  234
    //   34
    //    4
    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //      int space = 0;
    //     while(space < i - 1){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    // int start = i;
    // while(j <= n - i + 1){
    //     cout<<start;
    //     j++;
    //     start++;
    // }
    //     cout<<endl;
    //     i++;
    // }


    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1

    //components -> space, triangle_left, triangle_right

    // int n = 4;
    // int i = 1;
    // while(i <= n){
    //     //Print space
    //     int space = n - i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     //print stars of left triagle
    //     int j = 1;
    //     while(j <= i){
    //         cout<<j;
    //         j = j + 1;
    //     }

    //     //print space of right triangle
    // int start = i - 1;
    // while(start){
    //     cout<<start;
    //     start--;
    // }
    //     cout<<endl;
    //     i++;
    // }

    return 0;
}