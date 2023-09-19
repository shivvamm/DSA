#include<iostream>
using namespace std;

int main(){

int *a ,*b; // is a pointer to int type
double dp, *dp2; // dp2 is pointer to double
int ival = 50;
int  *q = &ival; // & is a n address of operator
cout<<q<<endl; // give address of ival
cout<<*q<<endl; //value that is stored in the address given by p
cout<<"---------------------------------------------"<<endl;
cout<<"ival ="<<ival<<endl<<"q = "<<q<<endl<<"*q ="<<*q<<endl;
cout<<"---------------------------------------------"<<endl;
*q = 51;
cout<<"New ival ="<<ival<<endl<<"new q = "<<q<<endl<<"new *q ="<<*q<<endl;
cout<<"---------------------------------------------"<<endl;
ival = 52;
cout<<"New ival ="<<ival<<endl<<"new q = "<<q<<endl<<"new *q ="<<*q<<endl;


// all the below are null pointer three ways
int *p1 = nullptr;
int *p2 = NULL;
int *p3 = 0;

return 0;
}
