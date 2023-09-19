#include<iostream>
using namespace std;

// static members are availabe throughtout the function calls as it is stored in the heap

class Myclass{
    public:
         static int staticVar;  // public static variable
    Myclass(){
    ++staticVar;
    }

    static void staticdisplay(); //public static member function

    private:
    static int staticprivate;  // private static variable;
    static void staticprdisplay(); //private static member function
};


int Myclass::staticVar = 256;
void Myclass::staticdisplay(){
cout<<"This is a static  Method defined outside the class with number = "<<staticVar<<endl;
};

int Myclass::staticprivate = 40; // can be initialized but cannot be accesed

int main(){
cout<<Myclass::staticVar<<endl;
Myclass::staticdisplay();

Myclass test;
test.staticdisplay();




}
