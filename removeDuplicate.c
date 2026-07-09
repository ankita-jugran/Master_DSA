// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each element: 1, 2, 3

#include <stdio.h>

int main(){

    int arr[] = {1,1,2,2,3,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int write = 0;

    for( int read = 1 ; read < n ; read++ ){

        if( arr[read] != arr[write] ){
            write++;
            arr[write] = arr[read];
        }
    }

    // Print unique elements
    for(int i = 0; i <= write; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}