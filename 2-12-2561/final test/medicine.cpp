#include <iostream>
using namespace std;

int main()
{
	cout<<endl;
	cout<<" Multiplitable Program.";
	cout<<endl;
	cout<<endl;
	cout<<" Put your multiplitable : ";
	float mul;
	int a=1;
	float sum;
	cin>>mul;
	do
	{
		sum=mul*a;
		cout<<" "<<mul<<" * "<<a<<" = "<<sum<<endl;
		a++;
	} while (a<=12);
	cin.get();
	
	return 0;
}
