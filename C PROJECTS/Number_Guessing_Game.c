#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n;
    int attempts = 0;
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &n);
    attempts++;

    int random = rand() % 100 + 1;


    while(n != random){
    if(n < random){
        printf("Guess Higher!\n");
    }
    else{
        printf("Guess Lower!\n");
    }
    if(n < 1 || n > 100){
        printf("Please guess between 1 and 100!\n");
    }
    printf("Enter your guess again: ");
    scanf("%d", &n);
    attempts++;
   }
    printf("Correct!\n");
    printf("You got it in %d attempts.", attempts);

   return 0;
}