#include <stdio.h>
int main()
{
    int n, x=0, y=0 ;
    scanf("%d", &n);
    int array[n];
    int even[n];
    int odd[n];
    for(int i=0; i<n; i++)
    {
     scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        if (array[i]%2==0)
        {
            even[x]=array[i];
            x = x+1;
        }
        else{
            odd[y++]=array[i];
            y=y+1;
        }
    }

    if (x>y){
            //printf("%d\n %d ", even[n], odd[n]);
            printf("%d--%d\n",x,y);
            for(int i=0; i<x; i++) {
                printf("%d ", even[i]);
            }
            printf("\n");
            for(int i=0; i<y; i++) {
                printf("%d ", odd[i]);
            }
        }
    else{
            //printf("%d\n %d ", odd[n], even[n]);
            printf("%d--%d\n",y,x);
            for(int i=0; i<y; i++) {
                printf("%d ", odd[i]);
            }
            printf("\n");
            for(int i=0; i<x; i++) {
                printf("%d ", even[i]);
            }
        }
}
