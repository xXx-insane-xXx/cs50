/*
 * This program converts all lowercase characters to uppercase in a string literal implemented using character array
 *
 *
 * While loop method:
 * iterator variable checks for '\0' (NUL) char to determine the end of string. Alternatively size of string could also be used for the same.
 *
 *
 * For loop method:
 * To calculate size of string, strlen() fn is used alternatively the following could be use:
 * int length_of_string = (sizeof(array_of_string) / sizeof(array_of_string[0]))
 *
 *
 * Super comments #if | #else | #endif have been used to select a block of code (for loop and while loop here) by changing value of #if <value> to 0 (chooses for loop) or 1 (choose while loop)
 *
 * */


#include <stdio.h>
#include <string.h>

int main(void) {

    
    // Array of char to store string
    char arr[] = "HelLo";
    int n = 0;


// Using while loop
#if 0 
    
    // Loop until end of string
    while (arr[n] != '\0') {
        
        // Apply condition only is character is lowercase
        if ('a' <= arr[n] && arr[n] <= 'z') {
            arr[n] = arr[n] - ('a' - 'A');
        }
        n++;
    }


// Using for loop
#else
    
    // Loop until end of string
    for (int i=0, len=strlen(arr); i<len; i++) {

        // Apply condition only is character is lowercase
        if ('a' <= arr[i] && arr[i] <= 'z') {
            arr[i] = arr[i] - ('a' - 'A');
        }
    }

#endif   

    printf("%s\n", arr);
    
    return 0;
}
