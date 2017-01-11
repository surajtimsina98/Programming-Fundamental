/*
Name:Suraj Timsina
Subject:Programing Fundamental
Lab Sheet:16
Program:WAP to find first and last digit of any number
Date:11 Jan. 2016
*/

#include<stdio.h>
int main()
{
int i,a,b;
printf("Enter any number:");
scanf("%d",&a);

b=(a%10);

printf("Last digit is:%d\n",b);

for(i=1;i<4;i++)
{
  a=(a/10);
}
printf("First digit is:%d\n",a);


return 0;
}
