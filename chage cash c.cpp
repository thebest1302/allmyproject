#include <iostream>
using namespace std;

int money;
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;

int main()
{
	cout<<endl;
	cout<<" Put your money to exchage : ";
	cin>>money;
	do {
		if (money>=1000)
		{money=money-1000;a=a+1;}
		else if (money>=500)
		{money=money-500;b=b+1;}
		else if (money>=100)
		{money=money-100;c=c+1;}
		else if (money>=50)
		{money=money-50;d=d+1;}
		else if (money>=20)
		{money=money-20;e=e+1;}
		else if (money>=10)
		{money=money-10;f=f+1;}
		else if (money>=5)
		{money=money-5;g=g+1;}
		else if (money>=1)
		{money=money-1;h=h+1;}
	} while (money<=0);
	system ("cls");
	cout<<endl;
	cout<<" EXCHAGE"<<endl;
	cout<<" 1,000 Cash : "<<a<<endl;
	cout<<"   500 Cash : "<<b<<endl;
	cout<<"   100 Cash : "<<c<<endl;
	cout<<"    50 Cash : "<<d<<endl;
	cout<<"    20 Cash : "<<e<<endl;
	cout<<"    10 Cash : "<<f<<endl;
	cout<<"     5 Cash : "<<g<<endl;
	cout<<"     1 Cash : "<<h<<endl;
	
	return 0;
}
