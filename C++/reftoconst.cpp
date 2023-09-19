#include<iostream>
using namespace std;


int main(){
const int ci = 1024;
const int &r1 = ci;

// r1 = 43564; // cannot assign because of const
cout<<ci<<endl;
cout<<r1<<endl;

int cj = 1024;
const int &r2 = cj; // binding non const obj to const possible of the same type if diff it apply implicit conversion
const int &r4 = 10; // this is also possible we can bind literals
const int &r5 = r4*6;
//int &r3 = ci; // give error


}
