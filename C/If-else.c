#include<stdio.h>
int main()
{
    //int n;
    //scanf("%d",&n);
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int array2[10];
    int array3 [10] = {0};
    for(int i=0; i<10; i++)
    {
        scanf("%d",&array2[i]);
    }
    int greatest = array2[0];
    for(int i=1; i<10; i++)
    {
        if(array2[i] > greatest)
        {
            greatest = array2[i];
        }
    }

    printf("%d\n",greatest);
}
