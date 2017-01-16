/*
Name:Suraj Timsina
Lab Sheet:17
Program:WAP to print reverse of any number
Date:16 Jan, 2017
*/
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reverse is:%d",rev);
	
	return 0;
}
	
