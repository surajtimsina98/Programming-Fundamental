#include<stdio.h>
int main()
{
    int array[3][2],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the numbers for 3*2 matrix:");
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the given 3*2 matrix is:\n");
    for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }

}
