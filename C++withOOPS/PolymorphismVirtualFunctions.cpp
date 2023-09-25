#include<iostream>
using namespace std;

class DC{
    public:
    virtual void introduce(){
 	cout<<"IM FROM DC UNIVERSE"<<endl;
 }

};

class Batman : public DC{
    public:
	void introduce(){
		cout<<"IM IN GOTHAM CITY AT THE BATCAVE"<<endl;
	}
};

class Teen : public DC{
    public:
	void introduce(){
		cout<<"IM IN NEWYORK AT TEEN TITANS HEADQUARTERS"<<endl;
	}
};

void callMe(DC &p){ //here  its performing late binding
p.introduce();
}


int main(){

Batman robin;
Teen raven;
callMe(raven);
return 0;
}
