#include <stdio.h>
int main()
{
    int a[5]={20,21,22};
    char array[][5] = { "one", "two", "three"};
    int c;
    scanf("%d",&c);
    for (int i=0; i<3; i++)
    {
        if(a[i]==c)
            printf("%s\n", array[i]);
    }
}
