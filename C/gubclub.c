#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct gub
{
    char nameOfClub[20];
    char clubLeader[20];
    int totalMembers;

} club[50];
void addClubDetails(int n)
{
    for(int i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Input name of the club:\n");
        scanf("%s",club[i].nameOfClub);
        printf("Input club leader name:\n");
        fflush(stdin);
        scanf("%s",club[i].clubLeader);
        printf("How many members in that club?\n");
        scanf("%d",&club[i].totalMembers);
        system("cls");
    }
    makeChoice(n);
}
void printDB(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Club name: %s\n",club[i].nameOfClub);
        printf("Club leader: %s\n",club[i].clubLeader);
        printf("Total members: %d\n\n\n",club[i].totalMembers);
    }
    makeChoice(n);
}
void updateClub(int n)
{
    char name[20];
    printf("Enter the name of club you want to change members:\n");
    fflush(stdin);
    scanf("%s",name);
    int test=0;
    for(int i=0; i<n; i++)
    {
        int a=strcmp(name,club[i].nameOfClub);
        if(a==0)
        {
            test=1;
            int newmem;
            printf("Enter new members\n");
            scanf("%d",&newmem);
            club[i].totalMembers=newmem;
            break;
        }
    }
    if(test==0)
    {
        printf("Input valid name\n");
        updateClub(n);
    }
    makeChoice(n);
}
void findClub(int n)
{
    char name[20];
    printf("Enter the name of club you want to see:\n");
    fflush(stdin);
    scanf("%s",name);
    int test=0;
    for(int i=0; i<n; i++)
    {
        int a=strcmp(name,club[i].nameOfClub);
        if(a==0)
        {
            test=1;
            printf("Club name: %s\n",club[i].nameOfClub);
            printf("Club leader: %s\n",club[i].clubLeader);
            printf("Total members: %d\n\n\n",club[i].totalMembers);
        }
    }
    if(test==0)
    {
        printf("Input valid name\n");
        findClub(n);
    }
    makeChoice(n);
}
void removeClub(int n)
{
    char name[20];
    printf("Enter the name of club you want to delete:\n");
    fflush(stdin);
    scanf("%s",name);
    int test=0;
    for(int i=0; i<n; i++)
    {
        int a=strcmp(name,club[i].nameOfClub);
        if(a==0)
        {
            test=1;
            for(int j=i; j<n; j++)
            {
                strcpy(club[j].nameOfClub,club[j+1].nameOfClub);
                strcpy(club[j].clubLeader,club[j+1].clubLeader);
                club[j].totalMembers=club[j+1].totalMembers;
            }
            n--;
        }
    }
    if(test==0)
    {
        printf("Input valid name\n");
        removeClub(n);
    }
    makeChoice(n);
}
void makeChoice(int n)
{
    printf("Make a Choice!\n1.Add Club\n2.Print database\n3.Find Club\n4.Update Club\n5.removeClub\nFor exit press any\n");
    int c;
    scanf("%d",&c);
    if(c==1)
        addClubDetails(n);
    else if(c==2)
        printDB(n);
    else if(c==3)
        findClub(n);
    else if(c==4)
        updateClub(n);
    else if(c==5)
        removeClub(n);
    else
        return 0;

}
int main()
{
    int n;
    printf("How many club you want to add?\n");
    scanf("%d",&n);
    makeChoice(n);
}
