#include<iostream>
using namespace std;

class Hola{
public:
     int a;
    char b;
void set(int x, char y){
this->a = x;
this->b = y;
}

void print(){
cout<<a<<endl<<b<<endl;
}
};



int main(){
Hola n1;
n1.set(6,'E');
n1.print();
Hola n2(n1);
n2.print();
n2.a = 7;
n2.print();
n1.print();

n1=n2;
n2.print();
n1.print();


}
