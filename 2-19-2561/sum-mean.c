// program : sum-mean.c
// By : Bodindecha No.4
// Date : 19/2/2561
#include <conio.h>
#include <stdio.h>

void main()
{
	int i,n,sum,x[100],max,min;
	float av; // double
	system("cls");
	printf("Sum & Average Program\n\n");
	// input
	printf("Enter N : "); scanf("%d",&n);
	// process , input
	sum = 0; i = 0;
	//printf("Enter x[%d] : ",i); scanf("%d",&x[i]);
	// max = x[i]; min = x[i]; sum = x[i]; i++;
	do
	{
		printf("Enter x[%d] : ",i);
		scanf("%d",&x[i]);
		sum = sum + x[i]; //a += x[i]
		// if (max < x[i]) {max = x[i]; }
		// if (max > x[i]) {max = x[i]; }
		i = i + 1; // i += 1; or i++; or ++i;
	} while (i <= n-1);
	// process
	printf("\nReport :-\n\n");
	av = (float) sum/n;
/*	i=0;
	while (i<n)
	{
		printf("x[%d] = %d",i,x[i]);
		i++;
	} */
	// output
	printf("\nN = %d\n",n);
	printf("Sum = %d\nAverage = %.3f\n",sum,av);
//	printf("Maximum = %d\nMinimum = %d\n",max,min);
	getch();
}
