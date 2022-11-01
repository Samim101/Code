#include <stdio.h>
void replace(char arr[], char oldChar, char newChar)
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] == oldChar){
            arr[i] = newChar;
        }
    }
    printf("%s",arr);

}
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    char oldc, newc;
    scanf("%c %c", &oldc, &newc);
    replace(arr,oldc,newc);
}
