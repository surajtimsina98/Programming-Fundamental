/*
Name:Suraj Timsina
Subject:Programming Fundamentals
Program:WAP to check character is alphabet or not using ternary operator
Lab Sheet:16
Date:8 Jan, 2017
*/

#include<stdio.h>
int main()
{
	int ASCII;
	char a;
	printf("Enter the character:\n");
	scanf("%c", &a);
	ASCII=a;
	((ASCII>=65&&ASCII<=97)||(ASCII>=97&&ASCII<=122))?printf("The character is an alphabet"):printf("The number is not an alphabet");
	return 0;
}
