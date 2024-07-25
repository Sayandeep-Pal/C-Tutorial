#include<stdio.h>
int main()
{
    int n,target;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for (int i=0;i<n;i++)
    {
        printf("element[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to delete : ");
    scanf("%d",&target);

    int i=0;
    while(i<n)
    {
        if(a[i]==target)
        {
            if(i<(n-1))
            {
                for(int j=i;j<n-1;j++)
                {
                    a[j] = a[j+1];
                }
                n--;
            }
        }
        else i++;
    }
    printf("The new array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}