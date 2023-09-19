#include<iostream>
using namespace std;

class Add{
private:
    int a;
    int b;
public:
void get(){
cin>>a>>b;
}
void add(){
    cout<<a+b<<endl;
}

};

int main(){
Add sum;
sum.get();
sum.add();


}
