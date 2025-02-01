#include <stdio.h> // Include the standard input/output library

// Main function - entry point of the program
int main() {
    // Print "Hello, World!" to the console
    printf("Hello, World!\n");

    // Print a simple message using a custom function
    printMessage();

    return 0; // Return 0 to indicate successful execution
}

// Custom function to print a message
void printMessage() {
    printf("This is a custom print function!\n");
}
