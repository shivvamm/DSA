#include<iostream>
using namespace std;
//method 1
typedef double wages;
typedef float dum;



int main(){

//method 2
using no = int;
using yo = char;


dum num1 = 3.3;
wages num = 0.3;
cout<<num1<<endl<<num<<endl;

no num3 =6;
yo letter = 'A';
cout<<num3<<endl<<letter<<endl;

return 0;
}
