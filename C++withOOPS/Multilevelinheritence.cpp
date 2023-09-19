#include<iostream>
using namespace std;

class A{
public:
int a;
};

class B : public A{
    public:
int b;
};
class C:public B{
    public:
int c;
};



int main(){
C temp;
temp.a = 6;
cout<<temp.a<<endl;

}
