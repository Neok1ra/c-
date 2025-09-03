#include <stdio.h>

int main() {
    int number, factorial = 1, i = 1;
    
    printf("Enter a number to find factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error: Factorial not defined for negative numbers!\n");
        return 1;
    }
    
    while (i <= number) {
        factorial = factorial * i;
        i++;
    }
    
    printf("Factorial of %d is: %d\n", number, factorial);
    
    return 0;
}
