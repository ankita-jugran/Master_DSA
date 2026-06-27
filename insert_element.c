// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (the array)
// - Third line: integer pos (1-based position)
// - Fourth line: integer x (element to insert)

// Output:
// - Print the updated array (n+1 integers) in a single line, space-separated

// Example:
// Input:
// 5
// 1 2 4 5 6
// 3
// 3

// Output:
// 1 2 3 4 5 6

// Explanation: Insert 3 at position 3, elements [4,5,6] shift right

#include<stdio.h>

int main(){
    int n = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array of size n+1 to accommodate the new element

    printf("Enter elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int position = 0 , element = 0;
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    //shift elements to the right to insert the new element
    //because we are using 1-based indexing, we need to shift elements from position-1 to n-1
    for ( int  i = n ; i > position - 1 ; i--){
        arr[i] = arr[i - 1];
    }
    //after making space now insert the element at the given position
    arr[position - 1] = element;

    printf("Updated array: ");
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}