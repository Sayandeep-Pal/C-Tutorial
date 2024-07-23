#include<stdio.h>
int main()
{
    int a[] = {10,30,20,50,80,100,1,000,5,};
    int len=sizeof(a)/4;
    int mid,n,l=0,r=len -1;
    int i,j;

    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }

    printf("Enter Searching number: ");
    scanf("%d",&n);

    // Binary Search
    while(l<len)
    {
        mid = (l+r)/2;
        if(a[mid]==n)
        {
            printf("number found");
            return 0;
        }
        else if(a[mid] < n)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    printf("number not found");
}