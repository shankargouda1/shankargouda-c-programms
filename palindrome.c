#include <stdio.h>

palindrome() {
    int n, reversed = 0, remainder, original;

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    original = n; // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Check if the original and reversed numbers are equal
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

