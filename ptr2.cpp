
/*
poniter to pointer is used to store the address of another pointer

*/

#include <iostream>
using namespace std;

int main(){
	int num=45;
	int *ptr1;
	int **ptr2;
	ptr1=&num;
	ptr2=&ptr1;

cout<<"address hold by ptr1: "<<ptr1<<endl;
cout<<"address of ptr1: "<<&ptr1<<endl;
cout<<"address hold by ptr2: "<<ptr2<<endl;
cout<<"accessing value of variable using pointer to pointer: "<<**ptr2<<endl;
cout<<"accessing value of variable using poipointer: "<<*ptr1<<endl;


	return 0;
}