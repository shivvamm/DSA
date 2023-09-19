#include<iostream>
using namespace std;

class Base{
public:
    virtual void print(){
    cout<<"Base"<<endl;
    }
};

class Derive: public Base{

void print() override{
 cout<<"Derived"<<endl;
}
};

int main(){

Derive A;
Base* B = &A;
B->print();

}
