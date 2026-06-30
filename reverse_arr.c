// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays

#include<stdio.h>

//function to display the array
void display( int arr[], int n ){

    for( int i =0 ; i < n ; i++ ){
        printf("%d\t ", arr[i]);
    }
    printf("\n");
}

int main(){

    int n = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Original array: "); 
    display(arr, n);

    // Two-pointer approach to reverse the array
    int left = 0;
    int right = n - 1;

    while( left < right ){
        // Swap arr[left] and arr[right]
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array: "); 
    display(arr, n);

    return 0;
}