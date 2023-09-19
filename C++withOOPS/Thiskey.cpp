#include<iostream>
using namespace std;
//this stores the address of the current object
class Hero{
    int power;
    int health;
public:
    Hero(int power){
    cout<<this<<endl;
    this->power = power;
    }
    Hero(int power, int health){
    cout<<this<<endl;
    this->power = power;
    this->health = health;
    }

    void display(){
    cout<<this->power<<endl<<this->health<<endl;
    }
};


int main(){
Hero ram(100,100);
cout<<&ram<<endl; // same address as the this
ram.display();
Hero laxman(100,100);
cout<<&laxman<<endl; // same address as the this
laxman.display();



}
