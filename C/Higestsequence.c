#include <stdio.h>
int main()
{
    int n=15, c=0,c1=0,count=0,count1=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            c1++;
            if(c1>count1)
            count1=c1;
        }
        else if(arr[i]==0)
        {
            if(c1>count1)
                count1>c1;
            c1=0;
        }
    }
        for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            c++;
            if(c>count)
            count=c;
        }
        else if(arr[i]==1)
        {
            if(c>count)
                count>c;
            c=0;
        }
    }
    printf("%d %d",count, count1);
}
