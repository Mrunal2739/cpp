#include<iostream>
using namespace std;
class dept{
public:
	string dept_name="Computer";
	int dept_id=1;
	string name;

dept(string n){

	name=n;
	
}
dept(){}


};
class student:public dept{
public:
	string city;
	student(string n,string c){
      name=n;
      city=c;
	}
	void show(){
		cout<<"Dept id: "<<dept_id<<endl;
		cout<<"Dept name :"<<dept_name<<endl;
		cout<<"Student name: "<<name<<endl;
		cout<<"City: "<<city<<endl;
	}



};
int main(){
	student s1("Nagesh Kanade","Latur");
	s1.show();

	return 0;
}