#include<stdio.h>
void swap(int *a, int *b/* take Parameter as your need */)
{
    int c=*a;
    *a=*b; *b=c;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b/* Pass argument as your need */);
    printf("A: %d B: %d", a,b); //Expected Output : A: 20 B: 10

}
