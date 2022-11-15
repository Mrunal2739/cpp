#include<iostream>
using namespace std;
class student{
  public:
  	int id;
  	int age;
  	string city;
  	void show();
  	student(int i,int a,string s){
          id=i;
          age=a;
          city=s;
  	}
    student(){}


};
void student::show(){
	cout<<id<<" "<<age<<" "<<city<<endl;
}

int main(){
	
	student s1(1,22,"latur");
	student s2(2,22,"sangola");
	student s3(3,23,"sangola");
	
	student s4;
	s4.id=4;
	s4.age=20;
	s4.city="omerga";

	

	s1.show();
	s2.show();
	s3.show();
	s4.show();

	return 0;
}