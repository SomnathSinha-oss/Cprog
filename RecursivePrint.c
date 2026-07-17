#include "stdio.h"
void printArray(int arr[],int size);
int main()
{
    int n;
    printf("Enter the size of the array...");
    scanf("%d",&n);
    printf("Enter the array elements");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printArray(a,n-1);
    return 0;

}
void printArray(int arr[],int size)
{
    if(size<0)
    {
        return;
    }
    printArray(arr, size-1);
    printf("%d \t",arr[size]);
}