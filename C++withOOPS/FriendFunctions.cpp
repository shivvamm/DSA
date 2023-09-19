#include<iostream>
using namespace std;

class Human{
    int a;
    char b;
public:
    Human(char ib ,int ia){ // constructor
    a = ia;
    b = ib;
    }
    void print(){
    cout<<a<<b<<endl;
    }

    friend void display(Human man); //declared inside the class with friend keyword


};

void display(Human man){  // Defined outside the class and able to access the private members within the class
   cout<<man.a<<man.b<<endl;

  };

int main(){

Human anil('a',7);
display(anil);


}
