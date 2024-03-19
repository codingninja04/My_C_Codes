#include <stdio.h>
#define MAX 100 // define the maximum size of the array

int main()
{
    int n; // declare a variable to store the number of integers
    int arr[MAX]; // declare an array of size MAX
    int sum = 0; // declare and initialize a variable to store the sum of the array elements
    int product = 1; // declare and initialize a variable to store the product of the array elements

    printf("Enter the number of integers (0 < n < 100): "); // prompt the user to enter the number of integers
    scanf("%d", &n); // read the input from the user and store it in n

    if (n > 0 && n < MAX) // check if n is valid
    {
        printf("Enter %d integers: ", n); // prompt the user to enter n integers
        for (int i = 0; i < n; i++) // loop from 0 to n-1
        {
            scanf("%d", &arr[i]); // read each integer from the user and store it in the array
            sum += arr[i]; // add the current element to the sum
            product *= arr[i]; // multiply the current element to the product
        }

        printf("The sum of the array elements is %d\n", sum); // print the sum of the array elements
        printf("The product of the array elements is %d\n", product); // print the product of the array elements
    }
    else // if n is invalid
    {
        printf("Invalid input. Please enter a number between 0 and 100.\n"); // print an error message
    }

    return 0; // return 0 to indicate successful termination of the program
}
