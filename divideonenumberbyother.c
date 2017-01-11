/*
Name:Suraj Timsina
Subject:Programing Fundamental
Lab Sheet:16
Program:WAP to enter a number and divide it by another number asked from user
Date:11 Jan. 2016
*/

#include<stdio.h>
int main()
{
int a,b,divide;
printf("Enter the number to be divided :\n");
scanf("%d",&a);

printf("Enter the number to divide above number :\n");
scanf("%d",&b);

divide=(a/b);

printf("%d",divide);

return 0;
}
