#include "stdio.h"
int main()
{
    int m[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d", & m[i]);
    }
    int k=0,sum=0;
    printf("Array elements are : \n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n", m[i]);
        sum=sum+m[i];
        if(k<=m[i])
        {
            k=m[i];
        }
    }
    printf("Sum : %d \n",sum);
    printf("Largest element : %d", k);
    for(int i=0;i<5;i++)
    {   
        for(int p=4;p>=i;p--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ", m[j]);
        }
        printf("\n");
    }
    return 0;
}