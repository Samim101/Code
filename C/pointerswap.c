#include <stdio.h>
int fab(int *c, int *d)
{
    int temp = *c;
    *c=*d, *d = temp;

}
int main()
{
    int a=10, b=20;
    fab(&a, &b);

    printf("%d %d",a,b);
}
