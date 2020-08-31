#include <iostream>
#include <windows.h>

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
  }

using namespace std;

string list1;
string list2;
string list3;
string list4;
string list5;
float list1price;
float list2price;
float list3price;
float list4price;
float list5price;
int order1;
int order2;
int order3;
int order4;
int order5;
float pay1;
float pay2;
float pay3;
float pay4;
float pay5;
int allorder;
float allpay;
float vat;
float receive;
float change;
int billlist1;
int billlist2;
int billlist3;
float billprice1;
float billprice2;
float billprice3;

int main()
{
	system("cls");
	list1="Chocolate";
    list1price=100;
    list2="Candy";
    list2price=20;
    list3="Bread";
    list3price=45;
    list4="SODA Can";
    list4price=15;
    list5="Boiled Egg";
    list5price=30;
    cout<<endl;
    cout<<" ALL LIST IN STORE";
    gotoxy(3,3);
    cout<<"Item";
    gotoxy(23,3);
    cout<<"Price/Unit";
    gotoxy(40,3);
    cout<<"Code";
    gotoxy(3,5);
    cout<<list1;
    gotoxy(26,5);
    cout<<list1price;
    gotoxy(42,5);
    cout<<"1";
    gotoxy(3,6);
    cout<<list2;
    gotoxy(27,6);
    cout<<list2price;
    gotoxy(42,6);
    cout<<"2";
    gotoxy(3,7);
    cout<<list3;
    gotoxy(27,7);
    cout<<list3price;
    gotoxy(42,7);
    cout<<"3";
    gotoxy(3,8);
    cout<<list4;
    gotoxy(27,8);
    cout<<list4price;
    gotoxy(42,8);
    cout<<"4";
    gotoxy(3,9);
    cout<<list5;
    gotoxy(27,9);
    cout<<list5price;
    gotoxy(42,9);
    cout<<"5"<<endl<<endl;
    cout<<" Put your first list order code : ";
    cin>>billlist1;
    cout<<" Put your order of first list   : ";
    cin>>order1;
    cout<<endl;
    if (billlist1 == 1) {
    billprice1=list1price*order1;}
    else if (billlist1 == 2) {
      billprice1=list2price*order1;}
      else if (billlist1 == 3) {
        billprice1=list3price*order1;}
        else if (billlist1 == 4) {
          billprice1=list4price*order1;}
          else if (billlist1 == 5) {
            billprice1=list5price*order1;}
    cout<<endl;
    gotoxy(1,14);
    if (billlist1 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    else if (billlist1 == 2) {
      cout<<" "<<list2<<"  "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
      else if (billlist1 == 3) {
        cout<<" "<<list3<<"  "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
        else if (billlist1 == 4) {
          cout<<" "<<list4<<"  "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
          else if (billlist1 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    cout<<endl<<endl;
    cout<<"           Next list press 'ENTER'";
    cin.get();
    cin.get();
    system("cls");
    cout<<endl;
    if (billlist1 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    else if (billlist1 == 2) {
      cout<<" "<<list2<<"  "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
      else if (billlist1 == 3) {
        cout<<" "<<list3<<"  "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
        else if (billlist1 == 4) {
          cout<<" "<<list4<<"  "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
          else if (billlist1 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    cout<<endl;
    gotoxy(1,3);
    cout<<" ALL LIST IN STORE";
    gotoxy(3,5);
    cout<<"Item";
    gotoxy(23,5);
    cout<<"Price/Unit";
    gotoxy(40,5);
    cout<<"Code";
    gotoxy(3,7);
    cout<<list1;
    gotoxy(26,7);
    cout<<list1price;
    gotoxy(42,7);
    cout<<"1";
    gotoxy(3,8);
    cout<<list2;
    gotoxy(27,8);
    cout<<list2price;
    gotoxy(42,8);
    cout<<"2";
    gotoxy(3,9);
    cout<<list3;
    gotoxy(27,9);
    cout<<list3price;
    gotoxy(42,9);
    cout<<"3";
    gotoxy(3,10);
    cout<<list4;
    gotoxy(27,10);
    cout<<list4price;
    gotoxy(42,10);
    cout<<"4";
    gotoxy(3,11);
    cout<<list5;
    gotoxy(27,11);
    cout<<list5price;
    gotoxy(42,11);
    cout<<"5"<<endl<<endl;
    cout<<" Put your second list order code : ";
    cin>>billlist2;
    cout<<" Put your order of second list   : ";
    cin>>order2;
    cout<<endl;
    if (billlist2 == 1) {
    billprice2=list1price*order2;}
    else if (billlist2 == 2) {
      billprice2=list2price*order2;}
      else if (billlist2 == 3) {
        billprice2=list3price*order2;}
        else if (billlist2 == 4) {
          billprice2=list4price*order2;}
          else if (billlist2 == 5) {
            billprice2=list5price*order2;}
    gotoxy(1,16);
    if (billlist2 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    else if (billlist2 == 2) {
      cout<<" "<<list2<<"  "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
      else if (billlist2 == 3) {
        cout<<" "<<list3<<"  "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
        else if (billlist2 == 4) {
          cout<<" "<<list4<<"  "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
          else if (billlist2 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    cout<<endl<<endl;
    cout<<"           Next list press 'ENTER'";
    cin.get();
    cin.get();
    system("cls");
    cout<<endl;
    if (billlist1 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    else if (billlist1 == 2) {
      cout<<" "<<list2<<"       "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
      else if (billlist1 == 3) {
        cout<<" "<<list3<<"       "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
        else if (billlist1 == 4) {
          cout<<" "<<list4<<"    "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
          else if (billlist1 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    cout<<endl;
    if (billlist2 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    else if (billlist2 == 2) {
      cout<<" "<<list2<<"       "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
      else if (billlist2 == 3) {
        cout<<" "<<list3<<"       "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
        else if (billlist2 == 4) {
          cout<<" "<<list4<<"    "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
          else if (billlist2 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    cout<<endl;
    gotoxy(1,4);
    cout<<" ALL LIST IN STORE";
    gotoxy(3,6);
    cout<<"Item";
    gotoxy(23,6);
    cout<<"Price/Unit";
    gotoxy(40,6);
    cout<<"Code";
    gotoxy(3,8);
    cout<<list1;
    gotoxy(26,8);
    cout<<list1price;
    gotoxy(42,8);
    cout<<"1";
    gotoxy(3,9);
    cout<<list2;
    gotoxy(27,9);
    cout<<list2price;
    gotoxy(42,9);
    cout<<"2";
    gotoxy(3,10);
    cout<<list3;
    gotoxy(27,10);
    cout<<list3price;
    gotoxy(42,10);
    cout<<"3";
    gotoxy(3,11);
    cout<<list4;
    gotoxy(27,11);
    cout<<list4price;
    gotoxy(42,11);
    cout<<"4";
    gotoxy(3,12);
    cout<<list5;
    gotoxy(27,12);
    cout<<list5price;
    gotoxy(42,12);
    cout<<"5"<<endl<<endl;
    cout<<" Put your third list order code : ";
    cin>>billlist3;
    cout<<" Put your order of third list   : ";
    cin>>order3;
    cout<<endl;
    if (billlist3 == 1) {
    billprice3=list1price*order3;}
    else if (billlist3 == 2) {
      billprice3=list2price*order3;}
      else if (billlist3 == 3) {
        billprice3=list3price*order3;}
        else if (billlist3 == 4) {
          billprice3=list4price*order3;}
          else if (billlist3 == 5) {
            billprice3=list5price*order3;}
	gotoxy(1,17);
    if (billlist3 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
    else if (billlist3 == 2) {
      cout<<" "<<list2<<"  "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
      else if (billlist3 == 3) {
        cout<<" "<<list3<<"  "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
        else if (billlist3 == 4) {
          cout<<" "<<list4<<"  "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
          else if (billlist3 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
    cout<<endl<<endl;
    cout<<"           Next list press 'ENTER'";
    cin.get();
    cin.get();
    system("cls");
    cout<<endl;
    if (billlist1 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice1<<" Baht";}
    else if (billlist1 == 2) {
      cout<<" "<<list2<<"       "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
      else if (billlist1 == 3) {
        cout<<" "<<list3<<"       "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
        else if (billlist1 == 4) {
          cout<<" "<<list4<<"    "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
          else if (billlist1 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    cout<<endl;
    if (billlist2 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    else if (billlist2 == 2) {
      cout<<" "<<list2<<"       "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
      else if (billlist2 == 3) {
        cout<<" "<<list3<<"       "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
        else if (billlist2 == 4) {
          cout<<" "<<list4<<"    "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
          else if (billlist2 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice2<<" Baht";}
    cout<<endl;
    if (billlist3 == 1) {
	cout<<" "<<list1<<"  "<<list1price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
    else if (billlist3 == 2) {
      cout<<" "<<list2<<"       "<<list2price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
      else if (billlist3 == 3) {
        cout<<" "<<list3<<"       "<<list3price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
        else if (billlist3 == 4) {
          cout<<" "<<list4<<"    "<<list4price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
          else if (billlist3 == 5) {
            cout<<" "<<list5<<"  "<<list5price<<" Baht/ 1 Unit  Pay = "<<billprice3<<" Baht";}
    cout<<endl<<endl<<endl;
    allpay=billprice1+billprice2+billprice3;
    allorder=order1+order2+order3;
    vat=allpay-(allpay/1.07);
    cout<<endl;
    cout<<"                                                 All price is  = "<<allpay;
    cout<<endl<<endl;
    cout<<"                                                 Receive money = ";
    cin>>receive;
    change=receive-allpay;
    cout<<endl;
    cout<<"                                                 Change money  = "<<change<<endl;
    cout<<endl<<endl<<endl;
    cout<<"--------------------  Show Bill Receipt press ' ENTER '  ----------------------- ";
    cin.get();
    cin.get();
    system("cls");
	cout<<endl;
    gotoxy(32,2);
    cout<<"CP ALL    7-Eleven";
    gotoxy(25,4);
    cout<<"TAX # 10754200011 (VAT Included)";
    gotoxy(33,5);
    cout<<"Vat code : 03105";
    cout<<endl<<endl;
    gotoxy(35,8);
    cout<<"Bill Receipt";
    cout<<endl<<endl;
    gotoxy(12,10);
    cout<<"Order";
    gotoxy(29,10);
    cout<<"List";
    gotoxy(65,10);
    cout<<"Pay";
    gotoxy(13,12);
    cout<<order1;
    gotoxy(29,12);
    if (billlist1 == 1) {
     cout<<list1;}
     else if (billlist1 == 2) {
       cout<<list2;}
       else if (billlist1 == 3) {
	     cout<<list3;}
         else if (billlist1 == 4) {
           cout<<list4;}
           else if (billlist1 == 5) {
             cout<<list5;}
    gotoxy(65,12);
    cout<<billprice1;
    gotoxy(13,13);
    cout<<order2;
    gotoxy(29,13);
    if (billlist2 == 1) {
     cout<<list1;}
     else if (billlist2 == 2) {
       cout<<list2;}
       else if (billlist2 == 3) {
	     cout<<list3;}
         else if (billlist2 == 4) {
           cout<<list4;}
           else if (billlist2 == 5) {
             cout<<list5;}
    gotoxy(65,13);
    cout<<billprice2;
    gotoxy(13,14);
    cout<<order3;
    gotoxy(29,14);
    if (billlist3 == 1) {
     cout<<list1;}
     else if (billlist3 == 2) {
       cout<<list2;}
       else if (billlist3 == 3) {
	     cout<<list3;}
         else if (billlist3 == 4) {
           cout<<list4;}
           else if (billlist3 == 5) {
             cout<<list5;}
    gotoxy(65,14);
    cout<<billprice3;
    cout<<endl;
    gotoxy(18,18);
    cout<<"Total  "<<allorder<<" pieces";
    gotoxy(45,18);
    cout<<"Price "<<allpay<<" Baht";
    cout<<endl;
    gotoxy(18,20);
    cout<<"VAT (Vat Include) = "<<vat<<" Baht";
    gotoxy(18,23);
    cout<<"Receive = "<<receive<<" Baht";
    gotoxy(45,23);
    cout<<"Change = "<<change<<" Baht";
    cout<<endl;
    cin.get();
}
