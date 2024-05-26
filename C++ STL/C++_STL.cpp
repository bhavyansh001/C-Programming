#include<bits/stdc++.h>     //all STLs are loaded using this
using namespace std;

int main(){
// Vector
    // vector<int> v;       //is like an array, automatically manages size, dynamic sized array
    // Has various methods available on W3

    //Way to define-
    // vector<int> v; //empty
    // vector<int> v(10); //10 elements (all 0)
    // vector<char> v(10, h); //string vector(all 'h')

    //Imporant functions-
    // 1. pushing element (at last):
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // cout<<"The element is "<<v[0]<<endl;
    // cout<<"The element is "<<v[1]<<endl;
    // cout<<"The element is "<<v[2]<<endl;

    // // 2. poping from the last
    // cout<<"The size is: "<<v.size()<<endl;
    // v.pop_back();
    
    // //3. size
    // v.size();
    // cout<<"The size is: "<<v.size()<<endl;

    // //4. clear the entire vector
    // v.clear();
    // cout<<"The size is: "<<v.size()<<endl;

    //use () for defining vectors, not []
    // vector<int> v(50) is a vector of 50 elements,
    // vector<int> v[50] is an array of 50 vectors

// sort()
    // O(NlogN)
    //Usage in array:
    // sort(a, a + n);     //takes pointer to the first element and the pointer to the (last + 1)th element

    // int a[4] = {5, 4, 1, 2};
    // sort(a, a + 4);     //if a + 3 given, just sorts the first 3 elements leaving the last one as it is

    // for(int i = 0; i < 4; i++){
    //     cout<<"The element is: "<<a[i]<<endl;
    // }

    //Usage in vector:
    // v.begin and v.end passsed as parameters

    // vector<int> v = {5, 4, 1, 2};
    // sort(v.begin(), v.end());

    // for(int i = 0; i < 4; i++){
    //     cout<<"The element is: "<<v[i]<<endl;
    // }

    //Usage in string:
    // string s;
    // sort(s.begin(), s.end());

// Pair- Composite datatype, composed of two different primitive or composite datatypes, can hence get two return values from functions
// pair<int, int>
// pair<int, string>
// pair<int, pair<int, string>>     //can be nested to any level
// pair<vector<int>, string>

    // pair<string, int> p = {"Hello", 6};
    // p.second = 2;
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // Sorting arrays/vectors of pairs
    // pair<int, int> p[5];
    // p[0] = {1, 2};
    // p[1] = {5, 2};
    // p[2] = {8, 1};
    // p[3] = {1, 0};
    // p[4] = {3, 4};

    // sort(p, p + 5);
    // int i = 0;
    // while(i < 5){
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    //     i++;
    // }       //so sorts based on first one, if the first is same then second is considered.


    // vector<pair<int, string>> v;

    // vector <int>::iterator itr = v.begin();     //ptr to the first element
    // auto is used to automatically detect the datatype, so the above thing can be written as:
    // auto itr;
    // cout<<*itr will give the first element of array, just like a pointer would.

// Set- Keeps an unique copy of each element in sorted order

    // set<int> s;         //empty set of integers;
    // set<string> s2;     //empty set of strings

    // methods/functions-
    // s.insert(x);    O(logn)     does nothing if x is already present
    // s.erase(x);     O(logn)     does nothing if x is absent
    // s.count(x);     O(logn)     returns 0 if x is not in the set, returns 1 if x is in the set
    // s.clear();      O(n)        clears all elements
    // s.size();       O(1)

    // set<int> s;
    // s.insert(2);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);        //no matter how many times you insert it, it won't be added again

    // cout<<s.count(2);
    // cout<<s.count(1);

    // s.erase(2);
    // cout<<s.count(2);

    // Cannot access using s[0],iterators are to be used
    // Set iterators provide less features than vector iterators
    // auto it = s.begin(); gives iterator to first element
    // it++, it--, ++it, --it are all valid O(logN)
    // it + 5, it += 2 etc are invalid, to jump to a further step, do it++ that many times

    // methods/functions-
    //s.end() is the iterator to a non-existent element (after the last element)
    // s.find(x) returns iterator to element with value x, returns s.end() if not found. O(logN)
    // s.lower_bound(x) returns iterator to the first element which is >= x. Returns s.end() if not found. O(logN)
    // s.upper_bound(x): returns iterator to the first element which is > x. Returns s.end() if not found. O(logN)
    // s.erase(it): erases the element with iterator it. O(logN)

    // Both of the next 2 lines are exactly same.
    // if(s.find(10) == s.end()) cout << “Not Found”;
    // if(s.count(10) == 0) cout << “Not Found”;

    // So to erase the first elemnet, s.erase(s.begin()) will erase the first one.

    set<int> s;

    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(10);
    s.insert(3);

    cout<<*s.begin();
 



    return 0;
}