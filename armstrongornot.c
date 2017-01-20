/*
Name:Suraj Timsina
Lab Sheet:20
Program:WAP to printwhether the number is pallidrome or not
Date:20 Jan, 2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
    int i,rem,armstrong=0,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        rem=n%10;
        armstrong=rem*rem*rem+armstrong;
        n=n/10;
    }
    printf("%d\n",armstrong);
    if(i==armstrong)
    {
        printf("The number is armstrong\n");
    }
    else
    {
      printf("The number is not armstrong\n");
    }

getch();
return 0;
}
