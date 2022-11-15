#include<iostream>
using namespace std;
int main(){
	float arr[10]{1,2,3,4,5,6,7,8,9,10};
	float sum=0;
	int i;
	float avg;
	float size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Values in array are"<<endl;
	for(i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(i=0; i<10; i++){
		sum=sum+arr[i];
	}
	avg=sum/size;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<avg<<endl;



	return 0;
}