#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

// Define size here (1, 2, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, and 8192)
#define SIZE 8192

int main(){

    // Create file
    FILE *file = fopen("/usr/lib/locale/locale-archive", "rb"); // read binary mode

    // File error handling
    if (file == NULL) {
        printf("Error: Error retrieving and opening file name\n");
        return 1;
    }

    // Declare variables
    char buffer[SIZE];
    size_t bytes_read;
    clock_t start_time, end_time;

    // Start time
    start_time = clock();


    // End time
    end_time = clock();

    // Close file
    fclose(file);
}