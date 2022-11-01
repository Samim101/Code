#include <stdio.h>
#include <math.h>
int main()
{
    int t,z=1;
    scanf("%d",&t);
    float a,b,c,d,e,f,i,j,A,B,g,h;
    while(t--)
    {
        scanf("%f %f %f %f %f %f",&a, &b, &c, &d, &e, &f);
        i=(a+e)/2,j=(b+f)/2;
        g=(2*i)-c, h=(2*j)-d;
        printf("Case %d: %.0f %.0f",z,g,h);
        A=abs(((a*d)+(c*f)+(e*h)+(g*b)-(b*c)-(d*e)-(f*g)-(h*a))/2);
        printf(" %.0f\n",A);
        z++;
    }
}
