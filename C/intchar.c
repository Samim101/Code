#include <stdio.h>
int main()
{
    int n;
    char c;
    scanf("%d",&n);
    fflush(stdin);
    scanf("%c",&c);
    while(n--)
    {
        printf("%c",c);
    }
}
