#include <iostream>
using namespace std;
int main(){
	int inum=45734827;
	float fnum2;
	
	float fnum=85.68;	;
	int inum2;

	char a;
	char b;

	
	cout<<"int: "<<inum<<endl;
	cout<<"float: "<<fnum<<endl;

    inum2=float(inum);
	cout<<"int converted to float: "<<inum2<<endl;

	inum2=int(fnum);
	cout<<"float converted to int: "<<inum2<<endl;

	a=char(inum);
		cout<<"int converted to char: "<<a<<endl;

	b=char(fnum);
	cout<<"float converted to char: "<<b<<endl;	


	return 0;
}