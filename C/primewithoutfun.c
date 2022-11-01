#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n==0 || n==1)
        printf("Not possible!");
    for(int j=2; j<=n; j++)
    {
        int count=0;
        for (int i=2; i<j; i++)
        {
            if (j%i==0)
            {
                count=1;
                break;
            }
        }
        if (count==0)
            printf("%d\n",j);
    }
}

