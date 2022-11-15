#include<iostream>
using namespace std;
int main(){
	int arr[10],i;
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter "<<size<<" values"<<endl;
	for(i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"You entered"<<endl;
   for(i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	 for(i=9; i>=0; i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;





	return 0;
}