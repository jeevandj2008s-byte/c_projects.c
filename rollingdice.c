#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;
int count=0;
    srand(time(NULL));

    do
    {
        printf("Roll the dice? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
        count++;
        if (choice == 1)
        {
            int dice = rand() % 6 + 1;
            printf("You rolled: %d\n", dice);
        }
else 
{
    printf("invalid choice");
}
    } while (choice == 1);

    printf("Game over!\n");
    printf("You Rolled %d times..\n",count);

    return 0;
} 