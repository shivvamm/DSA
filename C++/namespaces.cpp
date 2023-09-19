#include<iostream>
using namespace std; // this means we are using std namespace
// this is the using declaration that let us use the cin cout without defining the std namespace explicitly
using std::cout; // means using cout from std
using std::cin; // another version

int main(){

int a;
std::cin>>a; // cin defined inside the scope of std lib
std::cout<<a; // cout defined inside the scope of std lib


//Here std is the standard library namspace
}
