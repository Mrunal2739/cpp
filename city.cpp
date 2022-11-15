#include <iostream>
using namespace std;

class city{
public:
	int id;
	string City;

	 city(int a, string c){
      id=a;
      City= c;
	 }
	 ~city(){
	 	cout<<"Deconstructor Called"<<endl;
	 }

	 void show();


};



void city::show(){
	cout<<"Id :"<<id<<endl;
	cout<<"City: "<<City<<endl;
}
int main(){
	city c(1,"Latur");
	c.show();

	return 0;
}