#include <iostream>
using namespace std;

int main()
{
	cout<<endl;
	cout<<" Grade Program.";
	cout<<endl;
	cout<<endl;
	cout<<" Put your charater score : ";
	char score;
	cin>>score;
	cout<<endl;
	switch (score) {
	case 'a':
		cout<<" Your grade : 4";
		cout<<endl;
		break;
	case 'A':
		cout<<" Your grade : 4";
		cout<<endl;
		break;
	case 'b':
		cout<<" Your grade : 3";
		cout<<endl;
		break;
	case 'B':
		cout<<" Your grade : 3";
		cout<<endl;
		break;
	case 'c': 
		cout<<" Your grade : 2";
		cout<<endl;
		break;
	case 'C': 
		cout<<" Your grade : 2";
		cout<<endl;
		break;
	case 'd':
		cout<<" Your grade : 1";
		cout<<endl;
		break;
	case 'D':
		cout<<" Your grade : 1";
		cout<<endl;
		break;
	case 'f':
		cout<<" Your grade : 0";
		cout<<endl;
		break;
	case 'F':
		cout<<" Your grade : 0";
		cout<<endl;
		break;
	}
	cin.get();
	
	return 0;
}

