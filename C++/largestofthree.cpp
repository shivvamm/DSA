#include<iostream>
using namespace std;

int main(){

int  a,b,c;
cin>>a>>b>>c;
/* My logic
if(a>b && a!=b){
    if(a>c){
        cout<<a<<" is the greatest"<<endl;
    }
    if(a==c){
         cout<<a<<"is equal to"<<c<<endl;
    }
    else{
         cout<<c<<" is the greatest"<<endl;
    }
}
else if(b>c){
    cout<<b<<" is the greatest"<<endl;
}
else if(b==c){
    cout<<b<<" is the greatest and equal to"<<c<<endl;
}
else{
    cout<<b<<" is the greatest"<<endl;
}
*/

if((a>b) && (a>c)){
    cout<<a<<"is the greatest"<<endl;
}
else if((b>a) && (b>c)){
    cout<<b<<"is the greatest"<<endl;
}
else{
    cout<<c<<"is the greatest"<<endl;
}

return 0;
}
