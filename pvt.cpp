#include<iostream>
using namespace std;

class pvt{
private:
	string username;
	string password;

public:
 void setuser(string s){
 	username=s;
 }	
 string getuser(){
 	return username;
 }
 void setpass(string p){
 	password=p;
 }
 string getpass(){
 	return password;
 }


};

int main(){
	pvt p;
	p.setuser("nagesh");
	cout<<"username: "<<p.getuser()<<endl;
	p.setpass("nagesh@123");
	cout<<"password: "<<p.getpass()<<endl;




	return 0;
}