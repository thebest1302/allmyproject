#include <iostream>
using namespace std;

int main()
{
	cout<<endl;
	cout<<" Medicine program.";
	cout<<endl;
	cout<<endl;
	cout<<" Put your age : ";
	float age;
	cin>>age;
	cout<<endl;
	if (age<=5)
	{
		cout<<" Take a half tablet one Time at morning.";
		cout<<endl;
	} else if (age<=15)
		{
			cout<<" Take one tablet two Time at morning and dinner.";
			cout<<endl;
		} else if (age>15)
			{
				cout<<" Take one and half tablet three Time after meal.";
				cout<<endl;
			}
	cin.get();
	
	return 0;
}
