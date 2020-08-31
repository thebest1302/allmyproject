#include <iostream>
using namespace std;

char sc;

int main()
{
	cout<<endl;
	cout<<" Input Your Character : ";
	cin>>sc;
	cout<<endl;
	switch (sc)
	{
		case 'a':
			cout<<" Your grade is 4.";
			break;
		case 'b':
			cout<<" Your grade is 3.";
			break;
		case 'c':
			cout<<" Your grade is 2.";
			break;
		case 'd':
			cout<<" Your grade is 1.";
			break;
		case 'f':
			cout<<" Your grade is 0.";
			break;
	}
	cin.get();
	cin.get();
	
	return 0;
}
