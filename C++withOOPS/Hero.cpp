#include<iostream>
using namespace std;

class Hero{
public:
    int health; // integer is of 4 byte
    int power;
    char name[100]; // i bye for each char


    void print(){
    cout<<"The power is :"<<power<<endl;
    }
};
