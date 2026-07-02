// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)

#include <stdio.h>

int main(){

    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    int comparisons = 0;

    int element_to_find = 0;
    printf("Enter the element to find: ");
    scanf("%d", &element_to_find);

    int flag = 0;


    for( int i = 0 ; i < n ; i++ ){
        comparisons++;

        if( arr[i] == element_to_find ){
            printf("Found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if( flag == 0 ){
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}