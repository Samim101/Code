#include <stdio.h>
int fibo(int n)
{
    static int n1=0,n2=1,n3,total=0;
    if(n>0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        total+=n3;
        fibo(n-1);
    }
    return total;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("0 1 ");
    int t=fibo(n-2);
    printf("\n%d",t+1);
}

