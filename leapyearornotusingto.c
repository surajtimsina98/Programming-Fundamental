/*
Name:Suraj Timsina
Subject:Programming Fundamentals
Program:WAP whether year is leap year or not using ternary operator
Lab Sheet:16
Date:8 Jan, 2017
*/

#include<stdio.h>
int main()
{
int y;
printf("Enter a year:\n");
scanf("%d",&y);
(y%4==0&&y%100==0)?printf("The year is leap year"):(y%400==0)?printf("The year is leap year"):printf("The year is not leap year");

return 0;
}
