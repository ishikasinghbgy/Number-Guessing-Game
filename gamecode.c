#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, no_of_guesses=1;
    srand(time(0));
    number = rand()%100 + 1; 
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Guess a lower number please!!!\n");
        }
        else if(guess<number){
            printf("Guess a higher number please!!!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", no_of_guesses);
        }
        no_of_guesses++;
    }while(guess!=number);
    
    return 0;
}