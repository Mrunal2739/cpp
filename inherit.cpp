#include<iostream>
using namespace std;

class dept{
public:
   int id=1;
   string name="computer";
   string s_name;
   string s_city;

   dept(){}
   void show();
  
};
void dept::show(){
	cout<<id<<" "<<name<<" "<<s_name<<" "<<s_city<<endl;
}

class mstudent:public dept{
public:
	mstudent(string n,string c){
       s_name=n;
       s_city=c;	
	}
	


};
class fstudent:public mstudent{
	public:
		fstudent(string n,string s){
			s_name=n;
			s_city=s;
		}

};

int main(){
	mstudent s1("nagesh","latur");
	s1.show();
	fstudent f1("pallavi","latur");
	f1.show();


	return 0;
}
