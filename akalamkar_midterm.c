//Name: Anushka Kalamkar
//Student ID: 213022136

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 24;
    int guessedNumber;

    printf("Let's play a game");

    //input the number to guess from the user
    printf("Enter a number between 1 - 50\n");
    while(1) {
        scanf("%d", &guessedNumber);
        if (guessedNumber > 0 && guessedNumber <= 50){
            break;
        } else {
            printf("Please enter a valid number\n");
        }
    }

//To check if the user won a prize
if(guessedNumber == num){
    printf("Yayyy!!! Your guess was right! You just won a puppy!\n");
}else{
    printf("Sorry wrong guess, better luck next time!\n");
}
}

