#include<iostream>
#include <iomanip>
using namespace std;

int main(){
bool b= 54; // is assigned 0 false for any other value true
cout<<"b = "<<b<<endl;
int i = b; // int of true is 1
cout<<"i = "<<i<<endl;
i = 3.14;
cout<<"i = "<<i<<endl;
double pi = i;
cout<<"pi = "<<fixed<<setprecision(2)<<pi<<endl;
unsigned char c = -1;
cout<<"c = "<<c<<endl;

}
