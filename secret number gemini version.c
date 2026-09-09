#include <stdio.stdio.h>
#include <stdbool.h>

int main() {
    const int SECRET_NUMBER = 7;
    const int MAX_ATTEMPTS = 3;
    int guess = 0;
    bool won = false;

    printf("Guess a number between 1 and 10.\n");

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) {
        printf("Attempt %d/%d. Enter your guess: ", attempt, MAX_ATTEMPTS);
        scanf("%d", &guess);

        if (guess == SECRET_NUMBER) {
            printf("Correct! You win!\n");
            won = true;
            break; // Stop loop immediately on correct guess
        } else if (guess < SECRET_NUMBER) {
            if (attempt < MAX_ATTEMPTS) {
                printf("Too low! Try again.\n");
            }
        } else {
            if (attempt < MAX_ATTEMPTS) {
                printf("Too high! Try again.\n");
            }
        }
    }

    if (!won) {
        printf("Sorry, you ran out of attempts. You lose!\n");
    }

    return 0;
}