#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
//Function object is a function wrapped in a class such that it is accessible as an object
int main(){
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);
    sort( arr, arr+6, greater< int >( ));
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}