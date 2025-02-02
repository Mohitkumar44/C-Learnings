#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int Player, Computer = rand() % 3;
    printf("Choose 0 for snake, 1 for gun and 2 for water : ");
    scanf("%d",&Player);
    printf("Computer choose : %d\n",Computer);

    if (Player==Computer)
    {
        printf("Game Draw");
    }
    else if (Player==1&&Computer==0)
    {
        printf("You Won");
    }
    else if (Player==2&&Computer==0)
    {
        printf("You Lose");
    }
    else if (Player==0&&Computer==1)
    {
        printf("You Lose");
    }
    else if (Player==2&&Computer==1)
    {
        printf("You Won");
    }
    else if (Player==0&&Computer==2)
    {
        printf("You Won");
    }
    else if (Player==1&&Computer==2)
    {
        printf("You Lose");
    }
    else{
        printf("Something went wrong!");
    }
    return 0;
}