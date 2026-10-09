#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main(){
    srand(time(NULL));
    char words[][20] = {"APPLE","BANANA","ORANGE","MANGO","GRAPES","PINEAPPLE","ELEPHANT","TIGER","LION","MONKEY","RABBIT","GIRAFFE","DOLPHIN","PENGUIN","KANGAROO","COMPUTER","KEYBOARD","MONITOR","MOUSE","LAPTOP","PROGRAM","COMPILER","FUNCTION","POINTER","VARIABLE","FOOTBALL","CRICKET","HOCKEY","TENNIS","BADMINTON","MOUNTAIN","RIVER","FOREST","DESERT","ISLAND","VOLCANO","RAINBOW","THUNDER","SUNSHINE","GALAXY","PLANET","ROCKET","SATELLITE","DIAMOND","CHOCOLATE","PIZZA","BURGER","SANDWICH","NOTEBOOK","BACKPACK"};
    int totalWord = sizeof(words)/sizeof(words[0]);
    int random = rand() % totalWord;
    // printf("TEST : %s\n", words[random]);
    int length = strlen(words[random]);
    printf("Word: ");    
    char hidden[length + 1];
    for(int i=0;i<length;i++){
        hidden[i] = '_';
    }  
    hidden[length] = '\0';
    for(int i=0;i<length;i++){
        printf("%c ", hidden[i]);
    } 
    printf("\n");
    char guess;
    int lives = 7;
    while(strcmp(hidden, words[random]) != 0 && lives > 0){
    printf("\nEnter your guess: ");
    scanf(" %c", &guess);
    guess = toupper(guess);
    if(guess < 'A' || guess > 'Z'){
        printf("Please guess only in uppercase letters!\n");
        continue;
    }
    int correct = 0;
    for(int i=0;i<length;i++){
        if(guess == words[random][i]){
            hidden[i] = guess;
            correct = 1;
        }
    }
    if(correct == 0){
        lives--;
        printf("\nWrong guess! Lives left %d\n\n", lives);
    }

    printf("Word: ");
    for(int i=0;i<length;i++){
        printf("%c ", hidden[i]);
    } 
}
    if(lives == 0){
        printf("\nGame Over!");
        printf("\nThe word was %s", words[random]);
    }
    else{
        printf("\nCongratulations, You Win!");
    }

    return 0;
}