#include <stdio.h>

struct Calculation
{
    float num1;
    char operator;
    float num2;
    float result;
};

float calculate(float num1, float num2, char operator)
{
    float result;

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero!\n");
                return 0;
            }

            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }

    return result;
}

int main()
{
    struct Calculation history[100];

    int count = 0;
    int choice;

    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Calculate\n");
        printf("2. Show History\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            float num1;
            float num2;
            float result;
            char operator;

            printf("Enter num1: ");
            scanf("%f", &num1);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &operator);

            printf("Enter num2: ");
            scanf("%f", &num2);

            result = calculate(num1, num2, operator);

            printf("Result = %.2f\n", result);

            // Save calculation
            history[count].num1 = num1;
            history[count].operator = operator;
            history[count].num2 = num2;
            history[count].result = result;

            count++;
        }

        else if (choice == 2)
        {
            printf("\n===== HISTORY =====\n");

            if (count == 0)
            {
                printf("No calculations yet.\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    printf("%.2f %c %.2f = %.2f\n",
                           history[i].num1,
                           history[i].operator,
                           history[i].num2,
                           history[i].result);
                }
            }
        }

        else if (choice == 3)
        {
            printf("Goodbye bro! 👋\n");
        }

        else
        {
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}