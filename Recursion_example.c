/*
 * Title:  Recursion example
 * 
 * @author Nick Okerberg
 * @version 1.0
 * 
 * Description:  This program demonstrates how to use Recursion in C.
 * A global counter variable is initialized to 1, then the main 
 * function calls the recursion function. The recursion function then 
 * increments the counter each time it is called.  Once the counter
 * is greater than 10 (base case), it just returns.   
 * 
 * Developed with:  Dev-C++ 4.9.9.6 on Windows 10.
 * 
 * Revision History:
 * Date			Ver		Author			Description
 * 2017/09/17	1.0		Nick Okerberg	Initial Release, tested on Windows 10.
 */

#include <stdio.h> 
#include <stdlib.h>

// Global variable, initialize to 1 to start with.
int counter = 1;



/*
 * The recursion function. This relies on the global counter variable. 
 * When called, it checks to see if the counter is greater than 10.  If so,
 * then it returns. If not, then it increments the counter and recursively
 * calls itself again. 
 */
void recursion() {    
     
    // Base case, if counter > 10, then just return.
    if (counter > 10){      // Base case, when > 10 calls have been done, return.
         printf("Base case hit!\n");
         return;
    }
    // Otherwise, increment the counter and recursively call itself.
    else {
         printf("Counter value = %d\n", counter);
         counter++;
         recursion();    
    }
} // End of function recursion



/*
 * Entry point for the program, main function.
 */ 
int main(){
    
    recursion();         // Call the recursion function.
    
    system("pause");     // Hack for Dev-C++ "run" feature so command window stays open.
    return 0;
    
} // End of function main
