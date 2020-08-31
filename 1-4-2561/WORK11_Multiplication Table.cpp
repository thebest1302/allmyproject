#include <iostream>
using namespace std;

int a;
int b;
int c;

int main()
 {
 	b=0;
 	cout<<endl;
 	cout<<" Multiplication Table.";
 	cout<<endl;
 	cout<<endl;
 	cout<<" Put your multiplication table : ";
 	cin>>a;
 	system("cls");
 	cout<<endl;
	cout<<" Multiplication Table : "<<a;
	cout<<endl;
	cout<<endl;
	do
	{
		b++;
		c=a*b;
		cout<<" "<<a<<" x "<<b<<" = "<<c;
		cout<<endl;
	} while (b<12);
	cin.get();
	cin.get();
	
	return 0;
 }
