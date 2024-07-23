#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n,i,l = sizeof(a)/4;

    printf("Enter a sreaching element: ");
    scanf("%d",&n);

    //Linear Search
    for(i=0;i<l;i++)
    {
        if(a[i]==n)
        {
            printf("Number found at %d",i+1);
            return 0;
        }
    }
    printf("Number not found");

}