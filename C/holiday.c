#include <stdio.h>
#include<string.h>
int main()
{
    int a;
    char s[4];
    fgets(s,4,stdin);
    if (strncmp(s,"SUN",3) == 0)
    {
        a=7;
    }
    else if (strncmp(s,"MON",3) == 0)
    {
        a=6;
    }
    else if (strncmp(s,"TUE",3) == 0)
    {
        a=5;
    }
    else if (strncmp(s,"WED",3) == 0)
    {
        a=4;
    }
    else if (strncmp(s,"THU",3) == 0)
    {
        a=3;
    }
    else if (strncmp(s,"FRI",3) == 0)
    {
        a=2;
    }
    else if (strncmp(s,"SAT",3) == 0)
    {
        a=1;
    }
    printf("%d\n",a);
}
