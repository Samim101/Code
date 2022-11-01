#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        long long n;
        scanf("%lld",&n);
        if(n==1)
        {
            printf("%d\n",0);
            continue;
        }
        int z=0;
        while(1)
        {
            if (n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
            }

            z++;

            if(n%2!=0 && n%3!=0 && n%5!=0)
            {
                break;
            }

            if(n==1)
                break;

        }

        if(n==1)
            printf("%d\n",z);
        else
            printf("%d\n",-1);
    }

}
