#include<stdio.h>
void sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

