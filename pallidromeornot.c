/*
Name:Suraj Timsina
Lab Sheet:17
Program:WAP to display the given pattern
Date:16 Jan, 2017
*/
#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	i=n;
	while(n>0)
{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
	if(rev==i)
	{
	printf("The number is pallidrome\n");
	}
	else
	{
	printf("The number is not pallidrome\n");
	}
return 0;
}
