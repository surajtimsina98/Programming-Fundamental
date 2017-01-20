/*
Name:Suraj Timsina
Lab Sheet:20
Program:WAP to print fibanacci series upto 'n' terms
Date:20 Jan, 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter any number \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

    c=a+b;
    printf("%d \t",c);
    a=b;
    b=c;
    }
    getch();
    return 0;
}
