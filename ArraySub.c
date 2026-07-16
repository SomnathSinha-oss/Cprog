#include "stdio.h"
void Arraysub(int arr[],int size,int arrsub[],int subsize, int index);
int main()
{
    int n;

    printf("Enter the size of the array...");
    scanf("%d",&n);
    printf("Enter the elements in the array...");
    int a[n];
    
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        int subarray[n];
        int subsize=0;
        int index=0;
        Arraysub(a,n,subarray,subsize,index);
return 0;
}
void Arraysub(int arr[],int size,int arrsub[],int subsize,int index)
{
    if(index==size)
    {
        printf("{");
        for(int i=0;i<subsize;i++)
        {
            printf("%d \t ",arrsub[i]);
        }
        printf("}\n");
        return;
    }
    arrsub[subsize]= arr[index];
    Arraysub(arr,size,arrsub,subsize+1, index+1);

    Arraysub(arr,size,arrsub,subsize, index+1);

}