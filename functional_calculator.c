#include <stdio.h>

int main(void) {
    
    char opt;
    int x, y;
    float res;

    printf("Choose an operator (+, -, /, *) to perform the operation:");
    scanf("%c", &opt);

    if(opt == '+') {
        printf("You have selected: Addition\n");
    } else if (opt == '-') {
        printf("You have selected: Subtraction\n");
    } else if (opt == '/') {
        printf("You have selected: Division\n");
    } else if (opt == '*') {
        printf("You have selected: Multiplication\n");
    }

    printf("Enter the first number: ");
    scanf("%i", &x);
    printf("Enter the second number: ");
    scanf("%i", &y);

// USING SWITCH STATEMENT
    // switch (opt)
    // {
    // case '+':
    //     res = x + y;
    //     printf (" Addition of %d and %d is: %.2f", x, y, res); 
    //     break;
    // case '-':
    //     res = x - y;
    //     printf (" Subtraction of %d and %d is: %.2f", x, y, res);
    //     break;
    // case '*':
    //     res = x * y;
    //     printf (" Multiplication of %d and %d is: %.2f", x, y, res);
    //     break;
    // case '/':
    //     res = x / y;
    //     printf (" Division of %d and %d is: %.2f", x, y, res);
    //     break;
    // default:
    //     printf("Invalid operator!");
    //     break;
    // }

// USING IF/ ELSE IF / ELSE
if(opt == '+')
{
    res = x + y;
        printf (" Addition of %d and %d is: %.2f", x, y, res);
} 
else if(opt == '-')
{
    res = x - y;
        printf (" Subtraction of %d and %d is: %.2f", x, y, res);
}
else if(opt == '*')
{
    res = x * y;
        printf (" Multiplication of %d and %d is: %.2f", x, y, res);
}
else if(opt == '/')
{
    res = x / y;
        printf (" Division of %d and %d is: %.2f", x, y, res);
}
else 
{
    printf("Invalid operator!");
}

    return 0;
}