#include<iostream>
using namespace std;

int reused = 42;

int main(){
int unique = 0;
cout<<reused<<" "<<unique<<endl;

int reused = 0;
cout<<reused<<" "<<unique<<endl;

cout<<::reused<<" "<<unique<<endl; // explicitly request the global scope reused

// :: is a scope operator

}
