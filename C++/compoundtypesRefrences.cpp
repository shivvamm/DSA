#include<iostream>
using namespace std;

int main(){
int ival = 1024;
cout<<"ival = "<<ival<<endl;
int &refval = ival; // refers to or is another name for ival
// always assign to a value that is exists
cout<<"refval = "<<refval<<endl;
int &refval2 = refval;  // we will get an error it must be initialized
cout<<"refval2 = "<<refval2<<endl;

// any operations applied to the references will apply to the binding object
refval2 = refval2+6;
cout<<"ival = "<<ival<<endl;

int &r = ival, r2 = ival;
int i3 = 1024, &ri = i3;
int &r3 = i3, &r4 = ival;
//int &refval3 = 10  will give error must be an object
double dval = 3.14;
// int &refval5 = dval ; // error : must be an int object
}
