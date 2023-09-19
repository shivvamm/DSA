#include<iostream>
using namespace std;

int main(){
int a;
cout<<"Enter the year";
cin>>a;
if(a%400== 0)cout<<a<<" Is a leap year"<<endl;
else if(a%4 ==0 && a%100 ==0)cout<<a<<" Is a leap year"<<endl;
else cout<<"it is not a leap yaer";

return 0;
}
