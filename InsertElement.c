#include<stdio.h>
int main()
{
    int n,target,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for (int i=0;i<n;i++)
    {
        printf("element[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value to insert : ");
    scanf("%d",&target);

    printf("Enter the position to insert : ");
    scanf("%d",&pos);

    for(int i=n+1;i>pos-1;i--)
        a[i]=a[i-1];
    a[pos-1] = target;
    
    printf("The new array is: ");
    for(int i=0;i<n+1;i++)
        printf("%d ",a[i]);
}