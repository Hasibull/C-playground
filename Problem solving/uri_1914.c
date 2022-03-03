#include<stdio.h>

int main()
{
    int tc;

    scanf("%d",&tc);

    while(tc--){
        char player1[100],player1Choice[100],player2[100],player2Choice[100];

        scanf("%s %s %s %s", &player1, &player1Choice, &player2, &player2Choice);

        int value1,value2;

        scanf("%d %d", &value1, &value2);

        if((value1+value2)%2==0){
            if(strcmp(player1Choice,"PAR")){
                printf("%s\n",player2);
            }
            else{
                printf("%s\n",player1);
            }
        }
        else{
            if(strcmp(player1Choice,"IMPAR")){
                printf("%s\n", player2);
            }
            else{
                printf("%s\n", player1);
            }
        }
    }
    return 0;
}