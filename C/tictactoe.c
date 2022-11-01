#include <stdio.h>
#include <unistd.h>

char player1,player2;
char player1name[15], player2name[15];

char player(char point)
{

    if(point=='X'||point=='x')
    {
        player1='X',player2='O';
        printf("%s is X\n%s is O\n",player1name,player2name);
    }
    else  if(point=='O'||point=='o')
    {
        player1='O',player2='X';
        printf("%s is O\n%s is X\n",player1name,player2name);
    }
    else
    {
        printf("Silly mistake!\nChoose X/O\n");
        scanf("%s",&point);
        player(point);
    }

}
char again(char yesno)
{
    if(yesno=='y' || yesno=='Y')
        return 1;
    else if(yesno=='n' || yesno=='N')
        return 0;
    else
    {
        printf("You got it wrong!\nI said you wanna play or not? y/n: ");
        scanf("%s",&yesno);
        again(yesno);
    }

}

int main()
{
jump:
    system("color F9");
    int index[11]= {0,0,0,0,0,0,0,0,0,0};
    printf("Welcome to TicTacToe\n");
    sleep(1);
    printf("Who would like to play first?\nPut your name:\n");
    scanf("%s",&player1name);
    printf("And the second player?\n");
    scanf("%s",&player2name);
    sleep(1);
    printf("%s choose your sign\n",player1name);
    printf("Choose X/O\n");
    char point;
    scanf("%s",&point);
    player(point);

    int counter=1;//for player's turn
    char winner[15];
    char x1='1', x2='2', x3='3';
    char x4='4', x5='5', x6='6';
    char x7='7', x8='8', x9='9';
    printf("Now %s's turn\n",player1name);
    printf("%c|%c|%c\n",x1,x2,x3);
    printf("-----\n");
    printf("%c|%c|%c\n",x4,x5,x6);
    printf("-----\n");
    printf("%c|%c|%c\n",x7,x8,x9);

    while(1)
    {
        if(counter==10)
            break;
        char turn[5];
        scanf("%s",&turn);
        int a=turn[0]-'0';
        if(a>=1 && a<=9 && turn[1]!='0' && turn[1]!='1' && turn[1]!='2' && turn[1]!='3' && turn[1]!='4' && turn[1]!='5' && turn[1]!='6' && turn[1]!='7' && turn[1]!='8' && turn[1]!='9')
        {
            if(index[a]==a)
            {
                printf("This place has already taken.\nTry new.\n");
            }
            else
            {
                index[a]=a;

                if(counter%2==1)
                {
                    for(int i=0; i<sizeof(winner); i++)
                    {
                        winner[i]=player1name[i];
                    }

                    if(a==1)
                        x1=player1;
                    else if(a==2)
                        x2=player1;
                    else if(a==3)
                        x3=player1;
                    else if(a==4)
                        x4=player1;
                    else if(a==5)
                        x5=player1;
                    else if(a==6)
                        x6=player1;
                    else if(a==7)
                        x7=player1;
                    else if(a==8)
                        x8=player1;
                    else if(a==9)
                        x9=player1;
                }

                if(counter%2==0)
                {
                    for(int i=0; i<sizeof(winner); i++)
                    {
                        winner[i]=player2name[i];
                    }
                    if(a==1)
                        x1=player2;
                    else if(a==2)
                        x2=player2;
                    else if(a==3)
                        x3=player2;
                    else if(a==4)
                        x4=player2;
                    else if(a==5)
                        x5=player2;
                    else if(a==6)
                        x6=player2;
                    else if(a==7)
                        x7=player2;
                    else if(a==8)
                        x8=player2;
                    else if(a==9)
                        x9=player2;
                }

                counter++;
            }


        }
        else
        {
            printf("You have to put from 1 to 9\n");
        }
        //printf("counter:%d\n",counter);
        printf("%c|%c|%c\n",x1,x2,x3);
        printf("-----\n");
        printf("%c|%c|%c\n",x4,x5,x6);
        printf("-----\n");
        printf("%c|%c|%c\n",x7,x8,x9);
        if(counter%2==1 && counter<10)
        {
            printf("%s,s turn\n",player1name);
        }
        if(counter%2==0 && counter<10)
        {
            printf("%s,s turn\n",player2name);
        }
        if((x1==x2 && x2==x3)||(x4==x5 && x5==x6)||(x7==x8 && x8==x9)||(x1==x4 && x4==x7)||(x2==x5 && x5==x8)||(x3==x6 && x6==x9)||(x1==x5 && x5==x9)||(x3==x5 && x5==x7))
        {
            printf("Both Played well!!\n%s won!\n",winner);
            break;
        }
        if(counter==10)
        {
            printf("Played well!\nBut ,No winner\n");
        }

    }
    printf("Wanna play again? y/n: ");
    char yesno;
    scanf("%s",&yesno);
    //again(yesno);
    if(again(yesno))
        goto jump;
    else
        printf("Thanks for playing!!\n");
}
