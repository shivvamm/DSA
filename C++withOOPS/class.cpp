#include<iostream>
#include"Hero.cpp"
using namespace std;

//class is declared outside or in another file for global access

int main(){

Hero ram;
ram.health = 10;
ram.power = 100;
cout<<ram.health<<endl;
cout<<"Size of object :"<<sizeof(ram)<<endl;
ram.print();
return 0;

}
