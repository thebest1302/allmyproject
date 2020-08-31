#include <iostream>
using namespace std;

int sub[5];
int sumsub;
string firnam;
string lasnam;
int sid;

int main()
{
	int su=1;
	
	cout<<endl;
	cout<<" Put your firstname : ";
	cin>>firnam;
	cout<<endl;
	cout<<" Put your lastname  : ";
	cin>>lasnam;
	cout<<endl;
	cout<<" Put your studentID : ";
	cin>>sid;
	
	system("cls");
	cout<<endl;
	cout<<" StudentID : "<<sid;
	cout<<endl;
	cout<<" Name : "<<firnam<<" "<<lasnam;
	cout<<endl;
	do
	{
		cout<<endl;
		cout<<" Put your score of subject("<<su<<")  : ";
		cin>>sub[su];
		su++;
	} while (su<6);
	system("cls");
	cout<<endl;
	cout<<" Student : "<<sid<<endl;
	cout<<" Name : "<<firnam<<"  "<<lasnam<<endl<<endl;
	cout<<" Score(1) : "<<sub[1]<<endl;
	cout<<" Score(2) : "<<sub[2]<<endl;
	cout<<" Score(3) : "<<sub[3]<<endl;
	cout<<" Score(4) : "<<sub[4]<<endl;
	cout<<" Score(5) : "<<sub[5]<<endl;
	cout<<endl;
	sumsub=sub[1]+sub[2]+sub[3]+sub[4]+sub[5];
	cout<<" Sum of score : "<<sumsub;
	cin.get();
	cin.get();
	
	return 0;
}
