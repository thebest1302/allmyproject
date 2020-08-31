#include <iostream>
#include <stdio.h>
using namespace std;

float bmi;
float weight;
float height;
float heightm;

int main()
{
	cout<<endl;
	cout<<" Calculated BMI."<<endl<<endl;
	cout<<" Put your weight.(kg.) : ";
	cin>>weight;
	cout<<" Put your height.(cm.) : ";
	cin>>height;
	heightm=height/100;
	bmi=weight/(heightm*2);
	cout<<endl<<endl;
	cout<<" Your weight.(kg.) : "<<weight<<endl;
	cout<<" Your height.(m.)  : "<<heightm<<endl<<endl;
	printf(" Your BMI : %.1f",bmi);
	cout<<endl;
	if (bmi<=18.5)
	{
		cout<<" You're below threshold."<<endl;
	} else if (bmi<=22.9)
		{
			cout<<" You're slim."<<endl;		
		} else if (bmi<=24.9)
			{
				cout<<" You're over weight."<<endl;
			} else if (bmi<=29.9)
				{
					cout<<" You're obesity."<<endl;
				} else if (bmi>29.9)
					{
						cout<<" You're dangerous disease."<<endl;
					}
	cin.get();
	
	return 0;				
}
