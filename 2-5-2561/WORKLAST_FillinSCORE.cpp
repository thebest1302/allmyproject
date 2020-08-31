#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
void gotoxy (short x,short y){
 COORD pos = {x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
using namespace std;

int studentloop;
int showloop;
int ssu[30];
int sid[30];
string firnam[30];
string lasnam[30];
int eng[30],sci[30],sex[30],mane[30],pro[30],acc[30],web[30],tab[30],gra[30],eve[30];
float engav[30],sciav[30],sexav[30],maneav[30],proav[30],accav[30],webav[30],tabav[30],graav[30];
string eveav[30];
float engava[30],sciava[30],sexava[30],maneava[30],proava[30],accava[30],webava[30],tabava[30],graava[30],eveava[30];
float avgr[30];

int main()
{
	int si=0;
	int fi=0;
	int la=0;
	int su=0;
	int ax=1,ay=3;
	
	int bx=1,by=5;
	int bbx=1,bby=6;
	int cx=10,cy=5;
	int ccx=10,ccy=6;
	int dx=19,dy=5;
	int ddx=19,ddy=6;
	int ex=28,ey=5;
	int eex=28,eey=6;
	int fx=37,fy=5;
	int ffx=37,ffy=6;
	int gx=46,gy=5;
	int ggx=46,ggy=6;
	int hx=55,hy=5;
	int hhx=55,hhy=6;
	int ix=64,iy=5;
	int iix=64,iiy=6;
	int jx=73,jy=5;
	int jjx=73,jjy=6;
	int mx=1,my=8;
	int nx=1,ny=10;
	
	
	int en=0,enav=0,env=0;
	int sc=0,scav=0,scv=0;
	int se=0,seav=0,sev=0;
	int man=0,manav=0,mav=0;
	int pr=0,prav=0,prv=0;
	int ac=0,acav=0,acv=0;
	int we=0,weav=0,wev=0;
	int ta=0,taav=0,tav=0;
	int gr=0,grav=0,grv=0;
	int ev=0,evav=0,evv=0;
	int av=0;
	
	do
	{
		cout<<endl;
		cout<<" Program fill in SCORES."<<endl<<endl;
		su++;
		cout<<" Student : "<<su;
		cout<<endl;
		cout<<" Put StudentID : ";
		si++;
		cin>>sid[si];
		cout<<endl;
		cout<<" Put firstname : ";
		fi++;
		cin>>firnam[fi];
		cout<<" Put Lastname  : ";
		la++;
		cin>>lasnam[la];
		cout<<endl;
		cout<<" Put score of English : ";
		en++;
		cin>>eng[en];
	if (eng[en]<=49)
	{
		enav++;
		engav[enav]=0;
	} else if (eng[en]<=54)
		{
			enav++;
			engav[enav]=1;
		} else if (eng[en]<=59)
			{
				enav++;
				engav[enav]=1.5;
			} else if (eng[en]<=64)
				{
					enav++;
					engav[enav]=2;
				} else if (eng[en]<=69)
					{
						enav++;
						engav[enav]=2.5;
					} else if (eng[en]<=74)
						{
							enav++;
							engav[enav]=3;
						} else if (eng[en]<=79)
							{
								enav++;
								engav[enav]=3.5;
							} else if (eng[en]>79)
								{
									enav++;
									engav[enav]=4;
								}
		cout<<" Put score of Science Project : ";
		sc++;
		cin>>sci[sc];
	if (sci[sc]<=49)
	{
		scav++;
		sciav[scav]=0;
	} else if (sci[sc]<=54)
		{
			scav++;
			sciav[scav]=1;
		} else if (sci[sc]<=59)
			{
				scav++;
				sciav[scav]=1.5;
			} else if (sci[sc]<=64)
				{
					scav++;
					sciav[scav]=2;
				} else if (sci[sc]<=69)
					{
						scav++;
						sciav[scav]=2.5;
					} else if (sci[sc]<=74)
						{
							scav++;
							sciav[scav]=3;
						} else if (sci[sc]<=79)
							{
								scav++;
								sciav[scav]=3.5;
							} else if (sci[sc]>79)
								{
									scav++;
									sciav[scav]=4;
								}
		cout<<" Put score of Sex Education : ";
		se++;
		cin>>sex[se];
	if (sex[se]<=49)
	{
		seav++;
		sexav[seav]=0;
	} else if (sex[se]<=54)
		{
			seav++;
			sexav[seav]=1;
		} else if (sex[se]<=59)
			{
				seav++;
				sexav[seav]=1.5;
			} else if (sex[se]<=64)
				{
					seav++;
					sexav[seav]=2;
				} else if (sex[se]<=69)
					{
						seav++;
						sexav[seav]=2.5;
					} else if (sex[se]<=74)
						{
							seav++;
							sexav[seav]=3;
						} else if (sex[se]<=79)
							{
								seav++;
								sexav[seav]=3.5;
							} else if (sex[sc]>79)
								{
									seav++;
									sexav[seav]=4;
								}
		cout<<" Put score of Entrepreneurship : ";
		man++;
		cin>>mane[man];
	if (mane[man]<=49)
	{
		manav++;
		maneav[manav]=0;
	} else if (mane[man]<=54)
		{
			manav++;
			maneav[manav]=1;
		} else if (mane[man]<=59)
			{
				manav++;
				maneav[manav]=1.5;
			} else if (mane[man]<=64)
				{
					manav++;
					maneav[manav]=2;
				} else if (mane[man]<=69)
					{
						manav++;
						maneav[manav]=2.5;
					} else if (mane[man]<=74)
						{
							manav++;
							maneav[manav]=3;
						} else if (mane[man]<=79)
							{
								manav++;
								maneav[manav]=3.5;
							} else if (mane[man]>79)
								{
									manav++;
									maneav[manav]=4;
								}	
		cout<<" Put score of Basic Programming : ";
		pr++;
		cin>>pro[pr];
	if (pro[pr]<=49)
	{
		prav++;
		proav[prav]=0;
	} else if (pro[pr]<=54)
		{
			prav++;
			proav[prav]=1;
		} else if (pro[pr]<=59)
			{
				prav++;
				proav[prav]=1.5;
			} else if (pro[pr]<=64)
				{
					prav++;
					proav[prav]=2;
				} else if (pro[pr]<=69)
					{
						prav++;
						proav[prav]=2.5;
					} else if (pro[pr]<=74)
						{
							prav++;
							proav[prav]=3;
						} else if (pro[pr]<=79)
							{
								prav++;
								proav[prav]=3.5;
							} else if (pro[pr]>79)
								{
									prav++;
									proav[prav]=4;
								}
		cout<<" Put score of Database Management Program : ";
		ac++;
		cin>>acc[ac];
	if (acc[ac]<=49)
	{
		acav++;
		accav[acav]=0;
	} else if (acc[ac]<=54)
		{
			acav++;
			accav[acav]=1;
		} else if (acc[ac]<=59)
			{
				acav++;
				accav[acav]=1.5;
			} else if (acc[ac]<=64)
				{
					acav++;
					accav[acav]=2;
				} else if (acc[ac]<=69)
					{
						acav++;
						accav[acav]=2.5;
					} else if (acc[ac]<=74)
						{
							acav++;
							accav[acav]=3;
						} else if (acc[ac]<=79)
							{
								acav++;
								accav[acav]=3.5;
							} else if (acc[ac]>79)
								{
									acav++;
									accav[acav]=4;
								}		
		cout<<" Put score of Creating Webpage : ";
		we++;
		cin>>web[we];
	if (web[we]<=49)
	{
		weav++;
		webav[weav]=0;
	} else if (web[we]<=54)
		{
			weav++;
			webav[weav]=1;
		} else if (web[we]<=59)
			{
				weav++;
				webav[weav]=1.5;
			} else if (web[we]<=64)
				{
					weav++;
					webav[weav]=2;
				} else if (web[we]<=69)
					{
						weav++;
						webav[weav]=2.5;
					} else if (web[we]<=74)
						{
							weav++;
							webav[weav]=3;
						} else if (web[we]<=79)
							{
								weav++;
								webav[weav]=3.5;
							} else if (web[we]>79)
								{
									weav++;
									webav[weav]=4;
								}		
		cout<<" Put score of Microsoft Excel : ";
		ta++;
		cin>>tab[ta];
	if (tab[ta]<=49)
	{
		taav++;
		tabav[taav]=0;
	} else if (tab[ta]<=54)
		{
			taav++;
			tabav[taav]=1;
		} else if (tab[ta]<=59)
			{
				taav++;
				tabav[taav]=1.5;
			} else if (tab[ta]<=64)
				{
					taav++;
					tabav[taav]=2;
				} else if (tab[ta]<=69)
					{
						taav++;
						tabav[taav]=2.5;
					} else if (tab[ta]<=74)
						{
							taav++;
							tabav[taav]=3;
						} else if (tab[ta]<=79)
							{
								taav++;
								tabav[taav]=3.5;
							} else if (tab[ta]>79)
								{
									taav++;
									tabav[taav]=4;
								}		
		cout<<" Put score of Graphic Program : ";
		gr++;
		cin>>gra[gr];
	if (gra[gr]<=49)
	{
		grav++;
		graav[grav]=0;
	} else if (gra[gr]<=54)
		{
			grav++;
			graav[grav]=1;
		} else if (gra[gr]<=59)
			{
				grav++;
				graav[grav]=1.5;
			} else if (gra[gr]<=64)
				{
					grav++;
					graav[grav]=2;
				} else if (gra[gr]<=69)
					{
						grav++;
						graav[grav]=2.5;
					} else if (gra[gr]<=74)
						{
							grav++;
							graav[grav]=3;
						} else if (gra[gr]<=79)
							{
								grav++;
								graav[grav]=3.5;
							} else if (gra[gr]>79)
								{
									grav++;
									graav[grav]=4;
								}		
			cout<<endl;
			cout<<" Put score of Activities"<<endl<<"    ** Note : 0 = Fail , 1 = PASS "<<endl;
			cout<<" Put score : ";
			ev++;
			cin>>eve[ev];
		if (eve[ev]==1)
		{
			evav++;
			eveav[evav]="PASS";
		} else if (eve[ev]==0)
			{
				evav++;
				eveav[evav]="Fail";
			}
		env++;
		engava[env]=engav[enav]*1;
		scv++;
		sciava[scv]=sciav[scav]*1;
		sev++;
		sexava[sev]=sexav[seav]*1;
		mav++;
		maneava[mav]=maneav[manav]*2;
		prv++;
		proava[prv]=proav[prav]*3;
		acv++;
		accava[acv]=accav[acav]*3;
		wev++;
		webava[wev]=webav[weav]*3;
		tav++;
		tabava[tav]=tabav[taav]*3;
		grv++;
		graava[grv]=graav[grav]*3;
		av++;
		avgr[av]=((engava[env]+sciava[scv])+(sexava[sev]+maneava[mav])+(proava[prv]+accava[acv])+(webava[wev]+tabava[tav])+graava[grv])/20;
		showloop++;
		cout<<endl;
		cout<<" Exit program and show details Press '0'"<<endl<<" or Next student Press 'Another Number' : ";
		cin>>studentloop;
		system("cls");
	} while (studentloop>0);
	
	cout<<endl;
	cout<<" ALL SCORE OF STUDENT.";
	cout<<endl<<endl;
	do
	{
	gotoxy(ax,ay);
	cout<<"StudentID : "<<sid[si]<<"  Name : "<<firnam[fi]<<"  "<<lasnam[la];
	ay=ay+10;
	gotoxy(bx,by);
	cout<<"ENG";
	by=by+10;
	gotoxy(cx,cy);
	cout<<"SCI";
	cy=cy+10;
	gotoxy(dx,dy);
	cout<<"SEX";
	dy=dy+10;
	gotoxy(ex,ey);
	cout<<"ENR";
	ey=ey+10;
	gotoxy(fx,fy);
	cout<<"PRO";
	fy=fy+10;
	gotoxy(gx,gy);
	cout<<"DMS";
	gy=gy+10;
	gotoxy(hx,hy);
	cout<<"WEB";
	hy=hy+10;
	gotoxy(ix,iy);
	cout<<"EXC";
	iy=iy+10;
	gotoxy(jx,jy);
	cout<<"GRP";
	jy=jy+10;
	gotoxy(bbx,bby);
	cout<<eng[en]<<"("<<engav[enav]<<")";
	bby=bby+10;
	gotoxy(ccx,ccy);
	cout<<sci[sc]<<"("<<sciav[scav]<<")";
	ccy=ccy+10;
	gotoxy(ddx,ddy);
	cout<<sex[se]<<"("<<sexav[seav]<<")";
	ddy=ddy+10;
	gotoxy(eex,eey);
	cout<<mane[man]<<"("<<maneav[manav]<<")";
	eey=eey+10;
	gotoxy(ffx,ffy);
	cout<<pro[pr]<<"("<<proav[prav]<<")";
	ffy=ffy+10;
	gotoxy(ggx,ggy);
	cout<<acc[ac]<<"("<<accav[acav]<<")";
	ggy=ggy+10;
	gotoxy(hhx,hhy);
	cout<<web[we]<<"("<<webav[weav]<<")";
	hhy=hhy+10;
	gotoxy(iix,iiy);
	cout<<tab[ta]<<"("<<tabav[taav]<<")";
	iiy=iiy+10;
	gotoxy(jjx,jjy);
	cout<<gra[gr]<<"("<<graav[grav]<<")";
	jjy=jjy+10;
	gotoxy(mx,my);
	cout<<"ACTIVITIES : "<<eveav[evav];
	my=my+10;
	gotoxy(nx,ny);
	printf("Grade : %0.2f",avgr[av]);
	ny=ny+10;
	cout<<endl;
	si--;fi--;la--;
	en--;enav--;
	sc--;scav--;
	se--;seav--;
	man--;manav--;
	pr--;prav--;
	ac--;acav--;
	we--;weav--;
	ta--;taav--;
	gr--;grav--;
	ev--;evav--;
	showloop--;
	} while (showloop>0);
	cin.get();
	
	return 0;
}
