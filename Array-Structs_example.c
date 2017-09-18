/*
 * Title:  Struct Array example
 * 
 * @author Nick Okerberg
 * @version 1.0
 * 
 * Description:  This program demonstrates how to create a dynamic 
 * array of structs in C. It defines a "person" struct that contains
 * variables for the first/last names, and age.  Then it asks the 
 * user to provide the number of elements for the array. It will 
 * then dynamically allocate the memory required for an array of
 * the given size for the structure. 
 * 
 * Developed with:  Dev-C++ 4.9.9.2 on Windows 10.
 * 
 * Revision History:
 * Date			Ver		Author			Description
 * 2017/09/17	1.0		Nick Okerberg	Initial Release, tested on Windows 10.
 */

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>  // To use malloc

/*
 * Define the "person" struct and declare its variables. 
 */
struct person {
       char first_name[20];   // Char array for first name.
       char last_name[20];    // Char array for last name.
       int age;               // Integer for age. 
};



/*
 * The main function, the entry point of the program. It asks the user
 * to provide the number of elements for the struct array. Then it 
 * dynamically allocates memory for the array and initializes it. 
 */
int main(){
    
    int inputNum;         // Provided from console, Number of array elements
    int i;                // For loop counter;
    
    // Ask the user for number of array elements. 
    printf("Enter the number of elements for the \"person\" array: ");
    scanf("%d", &inputNum);
    
    // Dynamically allocate memory for the array. 
    person* myArray = (person*)malloc(inputNum*sizeof(person));
    
    // Initialize array to default values.
    for (i = 0; i < inputNum; i++){
        strcpy(myArray[i].first_name, "???");
        strcpy(myArray[i].last_name, "???");
        myArray[i].age = 0;
    }
    
    // Assign values to a specific element of the array. 
    strcpy(myArray[0].first_name, "myFirst");
    strcpy(myArray[0].last_name, "myLast");
    myArray[0].age = 21;
    
    // Print Array of persons:
    for (i = 0; i < inputNum; i++){
        printf("Person #%d: \n", i+1);
        printf("  First Name: %s \n", myArray[i].first_name);
        printf("  Last Name: %s \n", myArray[i].last_name);
        printf("  Age:  %d \n", myArray[i].age);
    }
    
    system("pause");  // Hack for Dev-C++ "run" feature so command window stays open.
    return 0;
    
} // End of function main
