#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    fflush(stdin);
    char arr[t+1];
    fgets(arr,sizeof(arr),stdin);
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>=65 && arr[i]<=90)
            arr[i]=arr[i]+32;
    }
    for(int i=0; arr[i]!='\0'; i++)
    {
        char letter;
        int counter=0;
        if('a'<=arr[i] && arr[i]<='z')
        {
            letter=arr[i];
            for(int j=0; arr[j]!='\0'; j++)
            {
                if(arr[j]==letter)
                {
                        counter++;
                }
            }
        }
        printf("%c : %d\n", letter, counter);
    }

}
