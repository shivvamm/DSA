#include<iostream>
using namespace std;

class temp{
public:
    int a;
    void print();

};

void temp::print(){
cout<<a<<endl;
}


int main(){
temp new1;
new1.a=9;
new1.print();

}
