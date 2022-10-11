#include<stdio.h>
int main()
{
    int arr1[5]={7,3,2,4,5};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr1[i]<arr1[j])
            {
                int t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr1[i]);
    }
}

