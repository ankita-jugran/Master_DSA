// Problem: Given integers a and b, compute a^b using recursion without using pow() function.

// Input:
// - Two space-separated integers a and b

// Output:
// - Print a raised to power b

// Example:
// Input:
// 2 5

// Output:
// 32

// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32

#include <stdio.h>

// Recursive function to compute a raised to the power b
int power( int a , int b ){
    if( b == 0 ){
        return 1;
    }
    else if( b < 0 ){
        return 1 / power(a, -b); // Handle negative powers
    }
    else{
        return a * power(a, b - 1);
    }
}

int main(){

    int a , b;
    printf("Enter integers a and b to compute a^b: ");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    // Compute and print a raised to the power b
    int result = power(a, b);
    printf("%d raised to the power %d is: %d\n", a, b, result);

}