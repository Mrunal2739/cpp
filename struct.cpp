#include<iostream>
using namespace std;
struct dept{
int id;
char name[20];

};
void inp(dept d[]){
	for(int i=0; i<4; i++){
		cout<<"Enter dept id & name"<<endl;
		cin>>d[i].id;
		cin>>d[i].name;

	}
}

void show(dept d[]){
	
	cout<<"dept details:"<<endl;
	for(int i=0; i<4; i++){
		cout<<"dept "<<i+1<<" details:"<<endl;
		cout<<"dept id:"<<d[i].id<<endl;
		cout<<"dept name:"<<d[i].name<<endl;

	}

}
int main(){
	dept d[4];
	inp(d);
	show(d);

	return 0;
}