#include <stdio.h>
int main()
{
    int withdraw, balance100, withdraw100;
    double balance, z, m;
    scanf("%d",&withdraw);
    scanf("%lf",&balance);
    balance100=balance*100;
    withdraw100=withdraw*100;
    z=balance100-50;
    if(withdraw%5==0 && withdraw100<=z)
    {
        m=((balance100-withdraw100)-50);
        m=m/100;
        printf("%.2lf\n",m);
    }
    else if(withdraw%5!=0)
    {
        printf("%.2lf\n",balance);
    }
    else if(withdraw100>z)
    {
        printf("%.2lf\n",balance);
    }
}
