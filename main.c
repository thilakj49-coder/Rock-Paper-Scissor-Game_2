#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    srand((unsigned)time(NULL));  // safer: explicit cast + NULL

    printf("Rock Paper Scissors Game\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Choice: ");

    if (scanf("%d", &userChoice) != 1) {
        printf("Invalid input!\n");
        return 0;
    }

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please run again.\n");
        return 0;
    }

    computerChoice = (rand() % 3) + 1;

    printf("You chose: %s\n", (userChoice == 1) ? "Rock" :
                               (userChoice == 2) ? "Paper" : "Scissors");
    printf("Computer chose: %s\n", (computerChoice == 1) ? "Rock" :
                                   (computerChoice == 2) ? "Paper" : "Scissors");

    if (userChoice == computerChoice) {
        printf("Result: It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("Result: You win!\n");
    } else {
        printf("Result: Computer wins!\n");
    }

    return 0;
}
