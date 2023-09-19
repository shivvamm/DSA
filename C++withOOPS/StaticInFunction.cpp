#include<iostream>
using namespace std;
void display();
int main(){
display();
display();
display();
display();
display();
}


void display(){
// the below line will execute only once
static int counter = 0; // this variable is available through all the function calls because it is stored in heap
cout<<"The counter is"<<++counter<<"Timed called"<<endl;
}
