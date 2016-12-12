/*
Name:Suraj Timsina
Subject:Programming Fundamental
Rollno.-46
Lab Sheet No.-11
Program-WAP to print largest among three numbers using ternary operator.
Date-12 Dec. 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the first number \n");
    scanf("%d",&a);

    printf("enter the second number \n");
    scanf("%d",&b);

    printf("enter the third number \n");
    scanf("%d",&c);

    (a>=b&&a>=c)?printf("%d is largest:",a):(b>=c&&b>=a)?printf("%d is largest:",b):("%d is largest:",c);
    getch();
    return(0);
}


