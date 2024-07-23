#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(a)/4;
    int mid,n,l=0,r=len -1;

    printf("Enter Searching number: ");
    scanf("%d",&n);

    // Binary Search
    while(l<len)
    {
        mid = (l+r)/2;
        if(a[mid]==n)
        {
            printf("number found at %d",mid);
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