#include<stdio.h>
int main()
{
    int arr1[5]= {2,2,4};
    int arr2[5]= {2,4,6,7,8};
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
        if(arr1[i]<arr2[j])
        {
            c[m++]=arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            c[m++]=arr2[j];
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            c[m++]=arr1[i];
            i++;
            j++;
        }
        if(i>4 || j>4)
        {
            if(i>4)
            {
                c[m++]=arr2[j++];
            }
            else
                c[m++]=arr1[i++];
        }
    }
    for(int i=0; i<m; i++)
    {
        printf("%d ",c[i]);
    }
}

