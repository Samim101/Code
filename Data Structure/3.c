
#include<stdio.h>
#include<stdlib.h>
#define max 4
int q[max],   front=-1,rear=-1;
int result [max];
int parent[max],ans[max];
int p=0,z;

struct node{
int vertex;
struct node*next;
};
struct node *head[max];
void graph(int src,int dest)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof (struct node));
    temp->vertex=dest;
    temp->next=NULL;
    if(head[src]==NULL)
        head[src]=temp;
        else
        {
            temp->next=head[src];
            head[src]=temp;
        }
}
void print()
{
    for(int i=0;i<max;i++)
    {
        struct node *temp;
        temp=head[i];
        printf("%d ",i);
        while(temp!=NULL)
        {
            printf("-> ");
            printf("%d ",temp->vertex);
            temp=temp->next;
        }
        printf("\n");
    }
}
void enqueue(int x,int n,int l)
{
    if (front==-1&& rear==-1)
    {
        front=0;
        rear=0;
        q[rear]=x;
        parent[n]=l;
    }
    else if(rear == max-1)
        printf("Overflow");
    else
    {
        rear++;
        q[rear]=x;
        parent[n]=l;
    }
}
void dequeue()
{
    if (front==-1&& rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        result[p]=q[front];
        p++;
        front++;
    }
}
void traverse(int x)
{
    int i,j,k,c,m;
    struct node *temp;
    parent[x]=-1;
    temp=head[x];
    int n=-1;
    int l=x;
    enqueue(x,n,l);
    for(i=0;i<max;i++)
    {
        while(temp!=NULL)
        {
            for(j=0;j<=p;j++)
            {
                c=0;
                if(p!=0)
                {
                if(temp->vertex==result[j] )
                {
                    c=1;
                    break;
                }
                }
            }
            for(k=front;k<=rear;k++)
            {
                m=0;
                if(temp->vertex==q[k])
                {
                    m=1;
                    break;
                }
            }
            n=temp->vertex;
            if(c==0 && m==0)
                enqueue(temp->vertex,n,l);
            temp=temp->next;

        }
        dequeue();
        temp=head[q[front]];
        l=q[front];
        n=head[q[front]]->vertex;
    }
}
void path(int src,int des)
{
     z=0;
    ans[z]=des;
    while(ans[z]!=src)
    {
        z++;
        ans[z]=parent[des];
        des=ans[z];
    }
    for(int i=0;i<=z;i++)
    {
        printf("%d ",ans[i]);
    }
}
int main()
{
    int src,des;
    printf("source = ");
    scanf("%d",&des);
    printf("Destination = ");
    scanf("%d",&src);
    graph(0,2);
    graph(0,3);
    graph(1,3);
    graph(2,0);
    graph(2,3);
    graph(3,0);
    graph(3,1);
    graph(3,2);
    print();
    //In traverse function we send the root node from which we want to start traverse
    traverse(src);
    printf("path = ");
    path(src,des);
    return 0;
}
