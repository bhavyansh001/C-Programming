#include<iostream>
#include<fstream>
//gives classes- fstreambase, ifstream, ofstream
using namespace std;

int main(){
    string st = "hey there";
    string st2;
    // //To open a file using constructor-
    // ofstream out("sample.txt");     //write operation
    // out<<st;        //writes in the file
    // //in and out functions can be named anything

    // ifstream in("sample2.txt");     //read operation
    // in>>st2;        //reads in the file

    // cout<<st2;      //just a single word gets printed
    // getline(in, st2);
    // cout<<st2;
    // //for multiple lines use multiple getline functions
//////

    ofstream out;
    out.open("sample.txt");     //open and close are functions of class fstream
    out<<"Altered text\n";
    out<<"Text altered\n";
    out.close();    //file gets closed automatically but this is a good practice

    ifstream in;
    in.open("sample.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while(in.eof() == 0){       //runs till end of file
        getline(in, st);
        cout<<st<<endl;
    }

    in.close();

    
        return 0;
}