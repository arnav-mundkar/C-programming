#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int rps, uScore = 0, cScore = 0, i = 1;
    while(uScore != 3 && cScore != 3){
    int choice = rand() % 3;
    printf("\n=======Round %d=======\n", i);
    printf("\n1 --> Rock\n2 --> Paper\n3 --> Scissors\nEnter your choice: ");
    scanf("%d", &rps);
    if(rps < 1 || rps > 3){
        printf("Please choose correctly!");
        return 0;
    }
    if(rps == 1){
        printf("\nUser chose Rock\n");
    }
    else if(rps == 2){
        printf("\nUser chose Paper\n");
    }
    else if(rps == 3){
        printf("\nUser chose Scissors\n");
    }
    if(choice == 0){
        printf("Computer chose Rock\n");
    }
    else if(choice == 1){
        printf("Computer chose Paper\n");
    }
    else{
        printf("Computer chose Scissors\n");
    }
    if((rps == 1 && choice == 0)||(rps == 2 && choice == 1)||(rps == 3 && choice == 2)){
        printf("It is a tie!\nReplay the round!\n");
    }
    else if((rps == 1 && choice == 2)||(rps == 2 && choice == 0)||(rps == 3 && choice == 1)){
        printf("User wins!\n");
        uScore++;
        i++;
    printf("\n======================\n      Scoreboard\nUser: %d\nComputer: %d\n======================\n", uScore, cScore);
    }
    else if((rps == 1 && choice == 1)||(rps == 2 && choice == 2)||(rps == 3 && choice == 0)){
        printf("Computer wins!\n");
        cScore++;
        i++;
    printf("\n======================\n      Scoreboard\nUser: %d\nComputer: %d\n======================\n", uScore, cScore);
    }
    }
    if(uScore == 3){
        printf("User wins the game!");
    }
    else if(cScore == 3){
        printf("Computer wins the game!");
    }
    return 0;
}