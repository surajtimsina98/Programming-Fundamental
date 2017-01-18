/*
Name:Suraj Timsina
Lab Sheet:18
Program:WAP to ask radius from user in main() method and pass it to function area() and calculate area of circle in the function and display the result
Date:18 Jan, 2017
*/
#include<stdio.h>
#define pi 3.14
void radius(int r);
int main()
{
	int r;
	printf("Enter the radius:");
	scanf("%d",&r);
	radius (r);
	return 0;
}
void radius (int r)
{
	float area;
	area=pi*r*r;
	printf("The area of circle is:%f",area);
}
