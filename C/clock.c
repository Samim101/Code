#include <stdio.h>
#include <math.h>
//#define PI acos(-1)
int main()
{
    int h, m;
    scanf("%d %d",&h,&m);
    double h30=30*(acos(-1)/180), h5=0.5*(acos(-1)/180), m6=6*(acos(-1)/180), ha=0, ma=0;
    if(h==12)
        h=0;
    if(m==60)
        m=0;
    ha=(((double)h*h30)+((double)m*h5)), ma=((double)m*m6);
    double angle=(ma-ha), angle2=(angle*(180/acos(-1)));
    printf("%f\n",angle2);
}
