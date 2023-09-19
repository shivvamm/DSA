#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    int age;
    string name;
    Parent(){
    cout<<"pandey family member"<<endl;
    this->age=0;
    this->name="Newname";
    }
};


class Child: public Parent{
public:
void print(){
cout<<this->age<<endl<<this->name<<endl;
}
};

class Child1: protected Parent{
public:
void print(){
cout<<this->age<<endl<<this->name<<endl;
}
};

class Child2: private Parent{
public:
void print(){
cout<<this->age<<endl<<this->name<<endl;
}
};


int main(){
cout<<"Parent Member"<<endl;
Parent Raj;
//Public
Child vijay;
vijay.name = "Vijay";
vijay.age = 14;
cout<<vijay.name<<endl;
cout<<vijay.age<<endl;

//Protected
Child1 ajay;
/* ajay.name = "Vijay";
ajay.age = 14; */  // cannot be accesed out  of  the child and  base class we need a method to accesss
ajay.print();


//Private
Child2 dhruv;
/* dhruv.name = "Vijay";
dhruv.age = 14; */  // cannot be accesed out  of  the  base class we need a method to accesss
dhruv.print();







}
