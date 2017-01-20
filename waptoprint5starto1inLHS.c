/*
Name:Suraj Timsina
Lab Sheet:17
Program:WAP to display the given pattern
Date:16 Jan, 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
}
