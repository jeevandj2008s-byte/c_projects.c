#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int choice;
    int count = 0;

    srand(time(NULL));

    do
    {
        printf("Roll the dice?(1=yes, no=0): ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int dice1 = rand() % 6 + 1;
            int dice2 = rand() % 6 + 1;
            int total = dice1 + dice2;
            int product=dice1*dice2;

            count++;
            printf("Dice 1: %d\n", dice1);
            printf("Dice 2: %d\n", dice2);
            printf("Total: %d\n", total);
            printf("product:%d\n",product);
        }
        else if (choice == 0)
        {
            printf("Game over\n");
        }
        else
        {
            printf("Invalid Choice\n");
        }
    } while (choice != 0);

    printf("You Rolled %d times\n", count);

    return 0;
}