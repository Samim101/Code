#include <stdio.h>
int main()
{
    char ar[100], br[100];
    gets(ar);
    gets(br);
    char *a=ar;
    char *b=br;
    while(*a)
    {
        a++;
    }
    while(*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    printf("%s", ar);
}
