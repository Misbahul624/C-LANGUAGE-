#include <stdio.h>

// Function Declaration (Prototype)
int multiply(int a, int b); 

int main() {
    // Main execution starts here
    int result = multiply(5, 10); 
    printf("Result: %d\n", result); 
    return 0; // Exit successfully
}

// Function Definition
int multiply(int a, int b) {
    return a * b;
}
