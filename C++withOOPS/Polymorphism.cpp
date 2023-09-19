#include<iostream>
using namespace std;
// poly means many and morph means forms  existing in nultiple forms
//compile time polymorphism or static polymorphism
// fucntion overloading
// operator overloading
class A{
public:
    int a;
    int b;
    int count;
    A(int a,int b ,int count ):a(a),b(b),count(count){};
void sayHello(){
cout<<"hELLO"<<endl<<a<<" "<<b<<" "<<count<<endl;}

int sayHello(int b, char d){
cout<<"hello  "<<d<<" with "<<b<<endl;
return 0;
}

void sayHello(char c){
cout<<"hello  "<<c<<endl;
}

int operator ++ (){
return ++count;
}

void operator + (A &X){
int value1 = this->a;
int value2 = X.a;
cout<<value1-value2<<endl;
}

void operator() (){
cout<<"Im bracket"<<endl;
}

};


int main(){
A temp(7,9,0);
A temp2(6,7,0);
temp.sayHello();
temp.sayHello(6,'U');
++temp;
cout<<temp.count<<endl;
++temp;
cout<<temp.count<<endl;
++temp;
cout<<temp.count<<endl;
temp + temp2;

temp2();



}
