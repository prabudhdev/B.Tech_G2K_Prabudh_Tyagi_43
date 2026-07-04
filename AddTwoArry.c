#include <stdio.h>

int main() {

    int arr1[] = {1, 2, 3, 4, 5};// assigned the array the values

    int arr2[] = {5, 4, 3, 2, 1};// assigned the array the values

    int n = sizeof(arr1) / sizeof(arr1[0]); // number of elements

    int sum[n]; // array to store the sum

 

    for (int i = 0; i < n; i++) {
        
        sum[i] = arr1[i] + arr2[i]
             
    }; // sum of two array and store in a sum varibale.
    


    // Print the result
    
    printf("Sum of two arrays: ");
    
    for (int i = 0; i < n; i++) {
        
        printf("%d ", sum[i]);
    }                                    //here loops print the values.

    return 0;
}
