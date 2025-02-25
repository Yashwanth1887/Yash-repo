#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);
    
    for (int i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n < 2)
        printf("Please enter a number greater than 1.\n");
    else
        printFibonacci(n);
    
    return 0;
}
