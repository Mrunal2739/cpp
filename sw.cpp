#include<iostream>
using namespace std;

int main(){
	int choice;

	cout<<"Enter choice from 1 to 4"<<endl;
	cin>>choice;

switch(choice){

 case 1:
  cout<<"block of case 1 executed"<<endl;
  break;

 case 2:
  cout<<"block of case 2 executed"<<endl;
  break;

 case 3:
  cout<<"block of case 3 executed"<<endl;
  break;

 case 4:
  cout<<"block of case 4 executed"<<endl; 
  break;

 default:
 cout<<"Wrong choice"<<endl;;


}	




	return 0;
}