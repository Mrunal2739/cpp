#include<iostream>
using namespace std;
int main(){
	int arr[10]{1,2,4,8,4,6,2,5,1,5};
	int num;
	int count=0;
	cout<<"Values in array are:"<<endl;
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter values to check occurences:"<<endl;
	cin>>num;

	for(int i=0; i<10; i++){
		if(arr[i]==num){
             count++;
		}
	}
	cout<<num<<" occured "<<count<<" times"<<endl;


	return 0;
}