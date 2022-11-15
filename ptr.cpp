#include <iostream>
using namespace std;
int main(){

	int a=20;
	int *iptr;
	iptr=&a;
	cout<<"value of a is: "<<a<<endl;
	cout<<"addres of a without pointer: "<<&a<<endl;
	cout<<"address of a with pointer: "<<iptr<<endl;
	cout<<"value of a using pointer: "<<*iptr<<endl;
}