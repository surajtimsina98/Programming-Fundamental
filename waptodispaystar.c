/*
Name:Suraj Timsina
Lab Sheet:17
Program:WAP to display the given pattern
Date:16 Jan, 2017
*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
