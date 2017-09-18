/*
 * Title:  Functions - Array target sum checker
 * 
 * @author Nick Okerberg
 * @version 1.0
 * 
 * Description:  This program demonstrates how to pass an array to a
 * function.  It statically defines an integer array, then a target sum
 * variable.  The program calls the findSum function using the integer
 * array and target sum variable.  If there are two unique element
 * values in the integer array whose sum equals the target sum value, 
 * then the program indicates so. 
 * 
 * Developed with:  Dev-C++ 4.9.9.2 on Windows 10.
 * 
 * Revision History:
 * Date			Ver		Author			Description
 * 2017/09/17	1.0		Nick Okerberg	Initial Release, tested on Windows 10.
 */

#include <stdio.h> 
#include <stdlib.h> 



/*
 * The function for finding out if there are two unique values within the 
 * integer array whose sum equal the target sum value. If there are, then
 * the result is printed out. Otherwise, "Not Found" is printed. 
 * 
 * @param *a - The integer array provided as input.
 * @param target - The integer target sum value to check, provided as input.
 * @param numElements - The number of elements in the integer array.
 * @return void - The function doesn't return any value back.
 */
void findSum (int *a, int target, int numElements){
    
    int i,j;      // For loop control variables.
    int tempSum;  // The temporary sum of 2 element values.
    
    // Iterate through the array
    for (i = 0; i < numElements; i++){
        for (j = i+1; j < numElements; j++){
            
            tempSum = a[i] + a[j];   // Sum of 2 values, 'i' and 'i+1' in the array.
            
            // If the sum of 2 values is the same as our target sum, indicate so and return.
            if (tempSum == target){
               printf("Found: %d and %d\n", a[i], a[j]);
               return;
            }
        } // End inner for loop.
    } // End outer for loop.
    
    // If the target sum is not found, indicate so and return.
    printf("Not Found!\n");
    return;
    
} // End of function findSum



/*
 * The entry point of the program. Define the target sum value for
 * checking the array. Define the integer array to check.  Calls
 * the findSum function. 
 */
int main(){
    
    // Target Sum - Find out if two unique numbers in array equal this sum value.
    int targetSum = 100;    
    
    // Initialize the array of integers to check. 
    int myArray [10] = {23, 75, 83, 44, 15, 36, 17, 52, 25}; 
    int numElements = 10;   // Number of elements in myArray;
    
    // Call the findSum function, providing the target sum and array to check.
    findSum(myArray, targetSum, numElements); 

    system("pause");    // Hack for Dev-C++ "run" feature so command window stays open.
    return 0;
    
} // End of function main
