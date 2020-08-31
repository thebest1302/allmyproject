#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define BLACK 0
#define DARKBLUE 1
#define DARKGREEN 2
#define AQUA 3
#define DARKRED 4
#define DARKVOILET 5
#define DARKYELLOW 6
#define GRAY 7
#define DARKGRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define VIOLET 13
#define YELLOW 14
#define WHITE 15

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

void gotoxy (short x,short y){
 COORD pos = {x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
using namespace std;

int main()
{
	gotoxy(10,5);
	textcolor(12,15);
	printf(" Bangbuathong Commercial Technologicial College ");
	resetcolor();
	gotoxy(10,7);
	printf(" Name   : Bodindecha Kumdam");
	gotoxy(10,8);
	printf(" Class  : 2/3");
	gotoxy(10,9);
	printf(" Number : 4");
	getch();
	
	return 0;
}
