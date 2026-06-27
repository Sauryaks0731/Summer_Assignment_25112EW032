#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("***** QUIZ APPLICATION *****\n\n");

    printf("Q1. What is another name for the \"for\" loop?\n");
    printf("1. Exit-controlled loop\n");
    printf("2. Entry-controlled loop\n");
    printf("3. Infinite loop\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("\nQ2. What does a compiler do?\n");
    printf("1. Converts Machine Language to High-Level Language\n");
    printf("2. Converts Assembly Language to High-Level Language\n");
    printf("3. Converts High-Level Language to Machine Language\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    printf("\nQ3. Who developed the C programming language?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. Bjarne Stroustrup\n");
    printf("3. James Gosling\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}