#include<iostream>
#include<string>
using namespace std;

//constructors are the same name methods with not return type as the class name
// the construter is called when the class is initialized


class Test{
private:
    string name;
    int age;

public:  // declared as public because we need to access it outside

    Test(){   // default constructor
    cout<<"Default constructor with nothing"<<endl;
    name = "noname";
    age  = 0;
    }

    /* Test(string iname ="Shivam", int iage=23){   // default constructor with default class
    cout<<"Default constructor with nothing"<<endl;
    name = iname;
    age  = iage;
    }  */

    Test(string iname){  // Parameterized constructor
    cout<<"Constructor with name iname as a parameter"<<endl;
    name = iname;
    age = 0;
    }

    Test(int iage){  //Parameterized construcotr
    cout<<"Constructor with age iage as a parameter"<<endl;
    name = "noname";
    age = iage;
    }

    Test(string iname, int iage); //Constructor declaration

    Test(Test &temp){  //copy constructor
    cout<<"Copy Constructor"<<endl;
    this->name = temp.name;
    this->age = temp.age+6;
    }


void print(){
cout<<age<<endl<<name<<endl;
}
};


// Constructor Definition outside the class
Test::Test(string iname, int iage){
    cout<<"Constructor overloading with age iage and iname as a parameter"<<endl;
    name = iname;
    age = iage;
    }



int main(){
Test t1;
t1.print();
Test t2("shivam");
t2.print();
Test t3(8);
t3.print();
Test t4("Shivam",8);
t4.print();
Test t5(t4);  // inbuilt copy constructor if not created
t5.print();

}
