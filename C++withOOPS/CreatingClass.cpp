#include<iostream>
#include<string>
using namespace std;

class Todo{
    public:
        int srno;
        string des;
    void settodo(){
    cin>>srno;
    cin>>des;
    }

    void gettodo(){
    cout<<srno<<endl;
    cout<<des;
    }

    void print(){
    cout<<des<<endl;
    cout<<"Hello"<<endl;
    }

};

int main(){
//method 1

Todo new1;  // the memory is allocated in the stack

Todo *new2 = new Todo; // the memory is allocated in the heap

new1.des = "todo static";
new1.print();

new2->des = "todo pointer";
new2->print();
cout<<(*new2).srno<<endl;  // derefrenced and then get the memeber attribute
cout<<new2->srno<<endl;
cout<<(*new2).des;
cout<<new2;

}
