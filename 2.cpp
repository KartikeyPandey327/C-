#include<iostream>

using namespace std;

int c=27;

int main(){
	int a,b,c;
	cout<<"ENTER THE VALUE OF a:";
	cin>>a;
	cout<<"ENTER THE VALUE OF b:";
	cin>>b;
	c=a+b;	
	cout<<"the sum of a and b is:"<<c;
	cout<<"The global value of c is:"<<::c;
	
	return 0;
} 


