#include <iostream>
using namespace std;
int c;
int&  add(int& num1,int& num2){
	num1++;
	c=num1+num2;
	cout<<"value of a in function: "<<num1<<endl;
	return c;
}


int main(){

	int a=45;
	int b=58;
	cout<<"original value of a: "<<a<<endl;
	add(a,b);
	cout<<"addition: "<<c<<endl;
        cout<<"after call: "<<a<<endl;

	return 0;
}
