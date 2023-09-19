#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b =6;

    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a^b "<<(a^b)<<endl;

    //major logic
    // in left sift the number is multiply by2
    // in right shift the number is divide by 2
    cout<<(17>>1)<<endl;
    cout<<(17<<1)<<endl;
    return 0;

}

