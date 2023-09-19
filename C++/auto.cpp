#include<iostream>
using namespace std;

int main(){

float type1,type2;
cin>>type1>>type2;
auto divide = type1/type2;

cout<<divide<<endl;
cout<<typeid(divide).name()<<endl; // gives the name of type


auto i = 0, *p= &i; // same type so no error
auto sz=0, pi = 3.14; // geneates erro not same type
}
