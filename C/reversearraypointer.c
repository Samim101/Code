#include<stdio.h>
void reverse(int *ptrx,int n)
{
    int i,j,temp,position;
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp= *(ptrx+i);
        *(ptrx+i) = *(ptrx+j);
        *(ptrx+j) = temp;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
