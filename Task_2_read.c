#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

// Define size here (1, 2, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, and 8192)
#define SIZE 32

int main(){

    // Create file
    FILE *file = fopen("/usr/lib/locale/locale-archive", "rb"); // read file in binary mode

    // File error handling
    if (file == NULL) {
        printf("Error: Error retrieving and opening file name\n");
        return 1;
    }

    // Declare variables
    char buffer[SIZE];

    while(fread(buffer, 1, SIZE, file) > 0){ // fread: https://www.tutorialspoint.com/c_standard_library/c_function_fread.htm
        // No action, we aren't printing or doing anything here
    }

    // Close file
    fclose(file);
}

// As sizes get smaller, the longer the program takes to run.
// SIZE (of the buffer) determines how much data is in each chunk (in bytes). 
/* Thus as we increase the size of the buffer, the data can be read in larger chunks 
(as opposed to reading byte to byte, size of 1, for example) and the program will run more efficiently.*/