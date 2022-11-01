#include <stdio.h>
int main()
{
    int n,o;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]%2==0 && arr[1]%2==0)
    {
        for(int i=2; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                o=i+1;
            }

        }

    }
    else if(arr[0]%2!=0 && arr[1]%2!=0)
    {
        for(int i=2; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                o=i+1;
            }

        }
    }
    else if((arr[0]%2)!=(arr[1]%2))
    {
        if(arr[0]%2==0 && arr[2]%2==0)
        {
            o=2;
        }
        else if(arr[0]%2!=0 && arr[2]%2!=0)
        {
            o=2;
        }
        else o=1;
    }
    printf("%d\n",o);

}
