//Write a C language program to find the number of and the sum of all integers greater than 100 and less than 200 that are divisible by 7.

#include <stdio.h>

int main() {
    int count = 0;  // Variable to count the numbers divisible by 7
    int sum = 0;    // Variable to store the sum of numbers divisible by 7

    // Loop through numbers from 101 to 199
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;    // Increment the count if divisible by 7
            sum += i;    // Add the number to the sum
        }
    }

    // Display the results
    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);

    return 0;
}
