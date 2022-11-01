#include <stdio.h>
int main() {
    int a, b, c, d, max_of_four=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b && a>c && a>d)
    {
        max_of_four=a;
    }
    if (b>a && b>c && b>d)
    {
        max_of_four=b;
    }
    if (c>a && c>b && c>d)
    {
        max_of_four=c;
    }
    if (d>a && d>c && d>b)
    {
        max_of_four=d;
    }
    printf("%d", max_of_four);

    return 0;
}
