#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=0;
        scanf("%d",&n);
        if(n>=1900)
            x=1;
        if(n>=1600 && n<=1899)
            x=2;
        if(n>=1400 && n<=1599)
            x=3;
        if(n<=1399)
            x=4;
        printf("Division %d\n",x);

    }
}
