#include<iostream>
using namespace std;

class Myclass{
int x,y,z;
public:
    Myclass(int a , int b , int c):x(a),y(b),z(c){
    cout<<"initialized with initialization list"<<endl<<x<<endl<<y<<endl<<z;
    }
};


int main(){


Myclass temp(5,6,7);

}
