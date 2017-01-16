/*
Name:Suraj Timsina
Lab Sheet:17
Program:WAP to count digits of any number
Date:16 Jan, 2017
*/
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		count=count+1;
		n=n/10;
	}
	printf("The number of count is:%d",count);
	return 0;
}
	
	
