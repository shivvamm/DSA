#include<iostream>
using namespace std;

class Animal{
public:
    void speak(){
    cout<<"Hello"<<endl;
    }

    virtual void sleep (){
    cout<<"Sleeping"<<endl;
    }
};

class Dog: public Animal{
public:
    int speak(){
    cout<<"Bark"<<endl;
    return 0;
    }

    void sleep() override{
    cout<<"Howlwing"<<endl;
    }
};

int main(){
Animal wild;
wild.speak();
Dog labrel;
labrel.speak();
labrel.sleep();
labrel.Animal::sleep(); // to access the overriden base class method



}
