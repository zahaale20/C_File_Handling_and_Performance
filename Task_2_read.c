#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// Define size here (1, 2, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, and 8192)
#define SIZE 2048

int main() {
    // Open the file for reading using the open system call
    int file = open("/usr/lib/locale/locale-archive", O_RDONLY);

    // File error handling
    if (file == -1) {
        printf("Error: Error retrieving and opening file\n");
        return 1;
    }

    // Declare variable(s)
    char buffer[SIZE];

    // Read data from the file using the read system call
    while (read(file, buffer, SIZE) > 0) {
        // No action, we aren't printing or doing anything here
    }

    // Close the file using the close system call
    close(file);

    return 0;
}

/*
Buffer Size     Time (in seconds)
1               30.520 
2               15.268 
16              1.997 
32              1.024 
64              0.501 
128             0.262 
256             0.142 
512             0.079 
1024            0.048 
2048            0.046 
4096            0.039 
8192            0.032 
*/

// As sizes get smaller, the longer the program takes to run.
// SIZE (of the buffer) determines how much data is in each chunk (in bytes). 
/* Thus as we increase the size of the buffer, the data can be read in larger chunks 
(as opposed to reading byte to byte, size of 1, for example) and the program will run more efficiently.*/