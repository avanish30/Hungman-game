#include <stdio.h>

int main() {
    char secret_word[] = "CODING";   // The secret word
    char word[] = "_ _ _ _ _ _"; // underscore for user to know that the letter it guessed is at which position in the word 
    int lives = 7;
    char guess;

    printf("Welcome to Hangman!\n");
    printf("Guess the 6-letter word.\n");

    // Player starts playing the game and guesses the letters one by one 
    while (lives > 0) {
        printf("\nWord: %s\n", word);
        printf("Lives left: %d\n", lives);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // when user inputs a letter the program checks if the letter is correct or not 
        if (guess == 'C' || guess == 'c') {
            word[0] = 'C';
            printf("Good guess!\n");
        } else if (guess == 'O' || guess == 'o') {
            word[2] = 'O';
            printf("Good guess!\n");
        } else if (guess == 'D' || guess == 'd') {
            word[4] = 'D';
            printf("Good guess!\n");
        } else if (guess == 'I' || guess == 'i') {
            word[6] = 'I';
            printf("Good guess!\n");
        } else if (guess == 'N' || guess == 'n') {
            word[8] = 'N';
            printf("Good guess!\n");
        } else if (guess == 'G' || guess == 'g') {
            word[10] = 'G';
            printf("Good guess!\n");
        } else {
            lives--;
            printf("Wrong guess! You lost a life.\n");
        }

        // when the user guess the correct word
        if (word[0] == 'C' && word[2] == 'O' && word[4] == 'D' && word[6] =='I' && word[8] =='N' && word[10] =='G') {
            printf("\nYou won! The word was CODING.\n");
            return 0;
        }
    }

    printf("\nYou lost! The word was CODING.\n");
    return 0;
}
