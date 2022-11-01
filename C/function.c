#include<stdio.h>
int ball(int a, int b)
{
   // printf("I am inside function\n");
    //printf("Amar mela taka, %d\n", n);
    return a+b;
}

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    printf("%d", ball(n,m));
}




