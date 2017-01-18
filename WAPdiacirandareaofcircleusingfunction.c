#include<stdio.h>
#define pi 3.14
void find(int r);
int main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    find(r);
    return 0;
}
void find(int r)
{
    float d,cir,area;
    d=r*2;
    cir=2*pi*r;
    area=pi*r*r;
    printf("The diameter of circle is:%f\n",d);
    printf("The circumference of circle is:%f\n",cir);
    printf("The Area of circle is:%f",area);
} 
