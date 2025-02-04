#include <stdio.h>

// Program to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating and displaying factorial
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
