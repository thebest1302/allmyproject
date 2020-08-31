#include <iostream>
#include <stdio.h>
#include <conio.h>

int pass;
int num[10];
int sumeven;
int sizeeven;
int sumodd;
int sizeodd;
int temp;
int a = -1;
int b = -1;

int main()
{
	printf("===========================================================\n");
	for (int i=1; i<=4; i++)
	{
		printf("Input your password = ");
		scanf("%d",&pass);
		if(pass==12345)
		{
			i=4;
			
			for (int i=0; i<=9; i++)
			{
				printf("===========================================================\n");
				printf("Input number %d = ",i+1);
				scanf("%d",&num[i]);
			}
			
	do
    {	
        if(i < 10-1 && num[i] > num[i+1])
        {
            temp = num[i+1];    
            num[i+1] = num[i];  
            num[i] = temp;	
            i = 0;				
        }
        else
        {
            i++;
        }
    } while(i < 10);	

	for (int i=0; i<=9; i++)
	{
		if(num[i] % 2 == 0)
			{
				a++;
				
			}
			else
			{
				b++;
				
			}
	}
	
	int even[a];
	int odd[b];
	int c=0;
	int d=0;
	
	for (int i=0; i<=9; i++)
	{
		if(num[i] % 2 == 0)
			{
				even[c] = num[i];
				c++;
			}
			else
			{
				odd[d] = num[i];
				d++;
			}
	}
	
		sizeeven = sizeof(even)/sizeof(even[0]);
		sizeodd = sizeof(odd)/sizeof(odd[0]);
		
		printf("\n");	
		printf("Even %d piece = ",sizeeven+1);
		for (int i=0; i<=sizeeven; i++)
		{
			printf("%d ",even[i]);	
		}
		printf("\n");
		printf("Odd  %d piece = ",sizeodd+1);
		for (int i=0; i<=sizeodd; i++)
		{
			printf("%d ",odd[i]);
		}
		printf("\n");
		printf("===========================================================\n");
		printf("Plot graph\n");
		printf("  Even = ");
		for (int i=0; i<=sizeeven; i++)
		{
			printf("*");
		}
		printf("\n");
		printf("   Odd = ");
		for (int i=0; i<=sizeodd; i++)
		{
			printf("*");
		}
		printf("\n===========================================================\n");
		
		for (int i=0; i<=sizeeven; i++)
		{
			sumeven = sumeven + even[i];
		}
		for (int i=0; i<=sizeodd; i++)
		{
			sumodd = sumodd + odd[i];
		}
		
		printf("Sum of even = %d\n",sumeven);
		printf("Sum of odd  = %d\n",sumodd);
		printf("===========================================================\n");
		printf(" Press any key to continue....\n");
		printf("===========================================================\n");
		getch();
		for (int i=2; i<=10; i++)
		{
			for (int j=1; j<=12; j++)
			{
				printf("%d x %d = %d\n", i, j , i*j);
			}
			printf(" Press any key to continue....");
			getch();
			printf("\n");
		}
				
		printf("\n===========================================================\n");
		
		printf(" Odd number minimize  = %d   and Odd number maximize  = %d \n",odd[0],odd[sizeodd]);
		printf(" Even number minimize = %d   and Even number maximize = %d \n",even[0],even[sizeeven]);
		
		printf("===========================================================\n");
		printf(" Press any key to continue....");
		getch();
		
		}
		else
		{
			printf("\n===========================================================\n");
			printf("Input password at %d no correct.\n",i);
		}
	}
	return 0;
}
