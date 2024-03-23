#include <stdio.h>


int main(void) {

    char arr[] = "HelLo";
    int n = 0;
    


    while (arr[n] != '\0') {
        
        if ('a' <= arr[n] && arr[n] <= 'z') {
            arr[n] = arr[n] - ('a' - 'A'); 
        }
        n++;
    }
   
    printf("%s\n", arr);

    return 0;
}
