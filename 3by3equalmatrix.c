#include<stdio.h>
int main()
{
    int count=0,array1[3][3],array2[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the 3*3 matrix:");
            scanf("%d",&array1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the 3*3 matrix:");
            scanf("%d",&array2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(array1[i][j]==array2[i][j])
            {
                count=count+1;
            }
        }
    }
    if(count==9)
    {
        printf("Both the 3*3 matrices are equal");
    }
    else
    {
        printf("Both the 3*3 matrices are not equal");
    }
    return 0;
}
