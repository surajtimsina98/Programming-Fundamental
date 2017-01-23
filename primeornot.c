/*
Name:Suraj Timsina
Lab Sheet:21
Program:WAP to check whether the number is prime or not
Date:23 Jan, 2017
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,n,count=0;
    printf("Enter any number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
      printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    getch();
    return 0;
}
