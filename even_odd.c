#include <stdio.h>

// Program to check if a number is even or odd
int main() {
    int num;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking even or odd
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}
