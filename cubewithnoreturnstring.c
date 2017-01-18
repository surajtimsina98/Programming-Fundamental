/*
Name:Suraj Timsina
Lab Sheet:18
Program:WAP to find cube of any number using function(with no argument and no string type)
Date:18 Jan, 2017
*/
#include<stdio.h>
void cube();
int main()
{
	cube();
	return 0;
}
void cube()
{
	int n,result;
	printf("Enter any number:");
	scanf("%d",&n);
	
	result=n*n*n;
	printf("Cube of this number is:%d",result);
}
