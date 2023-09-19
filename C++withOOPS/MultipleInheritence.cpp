#include<iostream>
using namespace std;

class A{
public:
int a;
};

class B{
    public:
int b;
};
class C:public A,public B{
    public:
int c;
};




int main(){
C temp;
temp.a = 6;
temp.b=7;
cout<<temp.a<<endl;
cout<<temp.b<<endl;

}
