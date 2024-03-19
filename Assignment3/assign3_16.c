#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
       srand(time(0));

       int magicNumber = rand() % 1000 + 1; 
        int guess, chances = 10;

    printf("Welcome to Guess the Magic Number!\n");

    while (chances > 0) {
        printf("Enter your guess (between 1 and 1000): ");
        scanf("%d", &guess);

        if  (guess == magicNumber) {
             printf("Congratulations! You won\n");
              break;
        }  else if (guess < magicNumber) {
            printf("Too low Guess again\n");
        }     else {
               printf("Too high Guess again!\n");
        }

        chances--;
    }

    if (chances == 0) {
        printf("Sorry, you have run out of chances. The magic number was: %d\n", magicNumber);
    }

    return 0;
}

