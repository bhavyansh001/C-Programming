#include<iostream>
using namespace std;

// class vector{
//     public:
//     int* arr;
//     int size;
//     vector(int m){
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v){
//         int d = 0;
//         for(int i = 0; i < size; i++){
//             d += this->arr[i] * v.arr[i];
//         }
//             return d;
//     }
// };

template <class T>
class vector{
    public:
    T* arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T d = 0;
        for(int i = 0; i < size; i++){
            d += this->arr[i] * v.arr[i];
        }
            return d;
    }
};

//for giving multiple parameters- template<class T1, class T2>
//for giving default parameters- template<class T1 = float, class T2 = int>

//Function template

// float funcAvg(int a, int b){
//     float avg = (a + b)/2.0;
//     return avg;
// }       //this works when a and b is int. Defining template

template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a + b)/2.0;
    return avg;
}


int main(){
    //Like objects are derived from classes, classes are derived from templates
    // For different data types, different classes are to be made, but this is against DRY, hence templates are used
    // Templates are hence called parameterized classes(takes data type as parameter)


    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;


    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;
    
    //function works correctly for int values but won't for any other data type, so we'll use template

    // vector <float> v1(3);
    // v1.arr[0] = 4.0;
    // v1.arr[1] = 3.9;
    // v1.arr[2] = 1.2;


    // vector <float> v2(3);
    // v2.arr[0] = 0.1;
    // v2.arr[1] = 8.9;
    // v2.arr[2] = 1.9;

    // float a = v1.dotProduct(v2);
    // cout<<a<<endl;      //otherwise different classes were to be made for each datatype

    float a;
    a = funcAvg(5, 2);
    printf("The avg is %.3f", a);       //printf works in cpp too
    return 0;
}