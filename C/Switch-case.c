#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    switch(n%2)
    {
    case 0:
        printf("EVEN");
        break;
    default :
        printf("ODD");
        break;
    }
}
