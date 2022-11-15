#include<iostream>
using namespace std;
int add(int a,int b){
	int c=a+b;
	cout<<"Addition: "<<c<<endl;
	return 0;
}

int sub(int a,int b){
	if(a>b){
		int c=a-b;
		cout<<"Subtraction: "<<c<<endl;
	}
	else{
		int c=b-a;
		cout<<"Subtraction: "<<c<<endl;
	}
	
	return 0;
}

int main(){

	add(40,45);
	sub(80,85);

}