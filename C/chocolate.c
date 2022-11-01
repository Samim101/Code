#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int box, eat=0;
        scanf("%d",&box);
        int choco[box];

        for(int i=0; i<box; i++)
        {
            scanf("%d",&choco[i]);
        }
        int min=choco[0];
        for(int i=0; i<box; i++)
        {
            if(choco[i]<min)
            {
                min=choco[i];
            }
        }
                for(int i=0; i<box; i++)
        {
            eat=(eat+(choco[i]-min));
        }

        printf("%d\n",eat);
    }
}
