#include<iostream>
#include<string>
using namespace std;

class Human{
private:
    bool living;
    int age;
    string *name;
    int *height;
public:
// Constructor
Human(){
    cout<<"Human is alive - constructor"<<endl;
    living =true;
    age=0;
}

Human(string iname, int iheight){
    name = new string;  // allocated memory dynaically
    height = new int;  // allocated memory dynaically

    *name = iname;
    *height = iheight;

}

void display(){
cout<<"The name is "<<*name<<endl<<"The height is "<<*height<<endl;
}




//Destructor
~Human(){   //cannot return any value and cannot pass any parameter
    cout<<"Human is dead - destructor"<<endl;
    living= false;
    age=0;
    delete name; // freeing the heap memory
    delete height;
}

};

//only in dynamic allocation we can call the destructor but in static it is called on its own

int main(){
Human *raj;
raj = new Human();  // call the constructor

delete raj; // call the destructor


Human *ram = new Human("Ram", 7);
ram->display();
delete ram;

return 0;
}
