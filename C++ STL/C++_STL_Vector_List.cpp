#include<iostream>
#include<vector>
#include<list>

using namespace std;


void display(vector<int> &v){       //passing reference
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<"\t";
    }
}       //This can be made a template function too

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}

int main(){
    vector<int> vec1;       //is like an array, automatically manages size
    // Has various methods available on W3
    int element;
    for(int i = 0; i < 4; i++){
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5 100);   //5 is representing number of copies to be inserted
    display(vec1);
    // v.at(i) can be used instead of v[i]

    vector<int> vec4(6,3); //6-element vector of 3s
    ////

    // List is bidirectional list
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);

    list1.remove(9);
    list1.sort();
    display(list1);

    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
    display(list2);

    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    return 0;
}