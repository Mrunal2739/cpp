#include <iostream>
using namespace std;
int main(){

	int arr[10];

	cout<<"Enter 10 elements of array"<<endl;

	for (int i = 0; i < 10; i++)
	{
	  cin>>arr[i];
	}

	cout<<"Enetered array values are: "<<endl;

	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}