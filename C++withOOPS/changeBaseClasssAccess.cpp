#include<iostream>
using namespace std;

class A{
public:
    int a;
};

class B : private A{
public:
    A::a;
};


int main(){
B temp;
temp.a = 7;
cout<<temp.a<<endl;

}
