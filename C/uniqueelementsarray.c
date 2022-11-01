#include <stdio.h>
int main()
{
    int a[5]= {1,3,6,6,6}, b[5]= {2,4,6,5,5}, c[12];
    int m=0;
    c[m++]=a[0];
    for(int i=0; i<5; i++)
    {
        int p=1;
        for(int j=0; j<m; j++)
        {
            if(a[i]==c[j])
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            c[m++]=a[i];
        }
    }
    for(int i=0; i<5; i++)
    {
        int p=1;
        for(int j=0; j<m; j++)
        {
            if(b[i]==c[j])
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            c[m++]=b[i];
        }
    }

    for(int i=0; i<m; i++)
    {
        printf("%d ",c[i]);
    }
}
