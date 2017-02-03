/*
student name: Suraj Timsina
program: WAP to store customer details using structure
lab sheet: 24
date: Feb.3 2017
*/
#include<stdio.h>
struct customer
{
    int customer_id;
    int no_of_product_purchased;
    float total_payment;
}orton;
int main()
{
    printf("Enter orton id");
    scanf("%d",&orton.customer_id);
    printf("Enter total product purchased");
    scanf("%d",&orton.no_of_product_purchased);
    printf("Enter total payment");
    scanf("%f",&orton.total_payment);

     printf("id=%d\n product=%d\n payment=%f",orton.customer_id,orton.no_of_product_purchased,orton.total_payment);

return 0;
}
