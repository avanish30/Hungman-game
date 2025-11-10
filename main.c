#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "mouse";
    char guess;
    char display[20];
    int tries = 6;
    int correct = 0;
    int len = strlen(word);

    // Fill display with underscores
    for (int i = 0; i < len; i++) {
        display[i] = '_';
    }
    display[len] = '\0';

    printf("Welcome to Hangman!\n");

    while (tries > 0 && correct < len) {
        printf("\nWord: %s\n", display);
        printf("Tries left: %d\n", tries);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < len; i++) {
            if (word[i] == guess && display[i] == '_') {
                display[i] = guess;
                correct++;
                found = 1;
            }
        }

        if (!found) {
            tries--;
            printf("Wrong guess!\n");
        } else {
            printf("Correct!\n");
        }
    }

    if (correct == len)
        printf("\n You won! The word was '%s'\n", word);
    else
        printf("\n Game over! The word was '%s'\n", word);

    return 0;
}
