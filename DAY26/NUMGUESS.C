#include <stdio.h>

int main()
{
    int number = 25, guess;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Correct Guess!\n");

    } while (guess != number);

    return 0;
}