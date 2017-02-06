/*
Student Name:Sambhav Siwakoti
Subject:Programming Fundamental
Lab Sheet No.:
Roll No.:
Program:WAP to declare a struct with 3 float value and assign value to them in main method and perform multiplication in a function multiply () passing struct data as argument.
Date:06 February 2017
*/
#include<stdio.h>
struct multiplication
{
    float a;
    float b;
    float c;
}num;
void multiply(float x,float y,float z);
int main()
{

    printf("Enter the three number \n");
    scanf("%f %f %f",&num.a,&num.b,&num.c);
    multiply(num.a,num.b,num.c);
    return 0;
}
void multiply(float x,float y,float z)
{
    float result;
    result=x*y*z;
    printf("The multiplication of three number is : %f \n",result);
}



