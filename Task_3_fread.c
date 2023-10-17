#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

// Define size here (1, 2, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, and 8192)
#define SIZE 8192

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

/*
Buffer Size     Time (in seconds)
1               1.461 
2               0.733 
16              0.161 
32              0.143 
64              0.064 
128             0.057 
256             0.055 
512             0.041 
1024            0.049 
2048            0.039 
4096            0.045 
8192            0.041 
*/

// As sizes get smaller, the longer the program takes to run.
// SIZE (of the buffer) determines how much data is in each chunk (in bytes). 
/* Thus as we increase the size of the buffer, the data can be read in larger chunks 
(as opposed to reading byte to byte, size of 1, for example) and the program will run more efficiently.*/