#include <iostream>
using namespace std;
class student
{
public:
	student(){
		
	cout<<"Hello"<<endl;
		
	}

	// ~student();
	int id;
	char fn[20];
	char ln[20];
	void show();

};

void student::show(){
	cout<<"ID: "<<id<<endl;
	cout<<"First name: "<<fn<<endl;
	cout<<"Last name: "<<ln<<endl;

	}



int main(){

	student s1;
	
	cout<<"enter id:"<<endl;
	cin>>s1.id;
	cout<<"enter first name:"<<endl;
	cin>>s1.fn;
	cout<<"enter lastname:"<<endl;
	cin>>s1.ln;
	s1.show();


	return 0;
}