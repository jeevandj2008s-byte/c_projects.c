#include <stdio.h>
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
else
{
result = num1 / num2;
}
break;
default:
printf("Error: Invalid operator!\n");
return 0;
}
return result;
}

int main()
{
int choice;
do
{
printf("1. Calculate\n");
printf("2. Exit\n");

scanf("%d", &choice);  

if (choice == 1)  
{  
float num1;  
float num2;  
float result;  
char operator;  
printf("Enter num1: ");  
scanf("%f", &num1);  
printf("Enter the operator (+, -, *, /): ");  
scanf(" %c", &operator);  
printf("Enter num2: ");  
scanf("%f", &num2);  
result = calculate(num1, num2, operator);  
printf("Result = %.2f\n", result);
}
}while (choice !=2);
return 0;
}
