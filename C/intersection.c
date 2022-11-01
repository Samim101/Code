
#include<stdio.h>
int main()
{
    int arr1[5]= {7,2,2,4,5};
    int arr2[5]= {6,7,2,8,7};
    int c[11];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]<arr1[j])
            {
                int t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
            }
            if(arr2[i]<arr2[j])
            {
                int t=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=t;
            }
        }
    }
    int m=0;
    for(int i=0, j=0; i<5 && j<5;)
    {
        if(arr1[i]==arr2[j])
        {
            c[m++]=arr1[i];
            i++;
            j++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0; i<m; i++)
    {
        printf("%d ",c[i]);
    }
}
