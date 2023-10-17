#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

// Define size here (1, 2, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, and 8192)
#define SIZE 8192

int main(int argc, char *argv[]){
    // Command line/argument error handling
    if (argc != 2){
        printf("Error: Incorrect argument usage. Ex: ./Task_1_getLine test.txt\n");
        return 1;
    }

    // Obtain file name & create file
    const char *file_name = argv[1];
    FILE *file = fopen(file_name, "r");

    // File error handling
    if (file == NULL) {
        printf("Error: Error retrieving and opening file name\n");
        return 1;
    }

    char *line = NULL;
    size_t len = 0;
    char *second_last_line = NULL;
    char *last_line = NULL;

    // Begin reading lines
    while (getline(&line, &len, file) != -1) {
        printf("%s", line);
        if (second_last_line != NULL){
            free(second_last_line);
        }

        second_last_line = last_line;
        last_line = strdup(line);
    }

    // Print statements
    printf("\n\n");
    if (second_last_line != NULL){
        printf("Second last line: %s", second_last_line);
        free(second_last_line);
    }
    if (last_line != NULL){
        printf("Last line: %s\n\n", last_line);
        free(last_line);
    }

    // Close file
    fclose(file);
    
    // Free memory allocation done by getLine
    free(line);
}