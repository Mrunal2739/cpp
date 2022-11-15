/*
 Pointers using Array
*/
#include <iostream>
using namespace std;
int main(){

	int arr[10]={24,45,67,54,76,9,89,65,12,44};

	int *arrptr[10];

	for (int i = 0; i < 10; i++)
	{
		arrptr[i]=&arr[i];
	}
    
    for (int i = 0; i < 10; i++)
    {
    	cout<<"address of "<<arr[i]<<" is "<<arrptr[i]<<endl;
    }
    

	return 0;
}