
#include<stdio.h>
#define max 5
int q1[max]= {NULL},q2[max];
int front1=-1,rear1=-1;
int front2=-1,rear2=-1;
void enqueue1(int x)
{
    if (front1==-1 && rear1==-1)
    {
        front1=0;
        rear1=0;
        q1[rear1]=x;
    }
    else if(rear1 == max-1)
        printf("Overflow q1");
    else
    {
        rear1++;
        q1[rear1]=x;
    }
}
void pop()
{
    int top=rear1;
    if(rear1==-1)
        printf("Underflow stack");
    else
    rear1--;
}
void enqueue2(int x)
{
    if (front2==-1&& rear2==-1)
    {
        front2=0;
        rear2=0;
        q2[rear2]=x;
    }
    else if(rear2 == max-1)
        printf("Overflow q2");
    else
    {
        rear2++;
        q2[rear2]=x;
    }
}
void dequeue2()
{
    if (front2==-1&& rear2==-1)
    {
        printf("Underflow q2");
    }
    else
    {
        front2++;
    }
}
void push(int x)
{
    int i=0;
    enqueue2(x);
    if(q1[max]!=NULL)
    {
        while(i!=rear1+1)
        {
            enqueue2(q1[i]);
            i++;
        }
    }
    for(int j=front2; j<=rear2; j++)
    {
        enqueue1(q2[j]);
    }
   dequeue2();
}
int main()
{
    push(3);
    push(2);
    push(9);
    push(5);
    push(7);
    pop();
    for(int i=front1; i<=rear1; i++)
    {
        printf("%d ",q1[i]);
    }
}
