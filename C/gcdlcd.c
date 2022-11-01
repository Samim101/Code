#include <stdio.h>
long long gcd(long long a, long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
long long lcm(long long a, long long b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a, b;
        scanf("%lld %lld",&a,&b);
        printf("%lld %lld\n",gcd(a,b),lcm(a,b));
    }

}
