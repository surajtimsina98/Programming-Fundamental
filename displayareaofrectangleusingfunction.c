/*
Name:Suraj Timsina
Lab Sheet:18
Program:WAP to enter length and breadth and display area of rectangle using function
Date:18 Jan, 2017
*/
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int a,b,result;
	printf("Enter the length:");
	scanf("%d",&a);
	printf("Enter the breadth:");
	scanf("%d",&b);
	
	result=a*b;
	printf("Area of rectangle is:%d",result);
}
