#include<iostream>
using namespace std;

int main(){

int a,b;
cout<<"Enter number a"<<endl;
cin>>a;
cout<<"Enter number b"<<endl;
cin>>b;
if(a!=b)cout<<"A is not equal  to b"<<endl;

if(a<b){
    cout<<"a is smaller than b"<<endl;
}
else if(a==b){
    cout<<"a equals to b"<<endl;
}
else if(a>b){
     cout<<"a greater than b"<<endl;
}
else{
    cout<<"nothiungh"<<endl;
}




return 0;

}
