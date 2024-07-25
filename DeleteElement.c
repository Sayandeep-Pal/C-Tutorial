#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for (int i=0;i<n;i++)
    {
        printf("element[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the position to delete : ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
        a[i]=a[i+1];
    
    printf("The new array is: ");
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);
}