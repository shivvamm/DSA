#include<iostream>
using namespace std;

int main(){
int  a  =29;
int b=56;
cout<<a<<endl;
cin>>a;
cout<<"Value of a"<<a<<endl<<"Value of a"<<b<<endl;
cout<<"Hello"<<endl; //this is buffered
cerr<<"This is a sample message using cerr"<<endl; // this is unbuffered for error messages
clog<<"This is a sample message using clog"<<endl; // this is unbuffered for log or warning messages
return 0;
}
