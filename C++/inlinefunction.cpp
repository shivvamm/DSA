#include<iostream>
using namespace std;

inline int add(int a,int b){
return a+b;
}

// used to remove the ovrhead of the function call and improve optimization
// efficient for simlple operations

int main(){
int x,y;
cin>>x>>y;
int res = add(x,y);
cout<<res<<endl;
return 0;

}
