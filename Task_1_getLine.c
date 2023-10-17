#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    // Command line/argument error handling
    if (argc != 2){
        printf("Error: Incorrect argument usage. Ex: ./Task_1_getLine <filename>");
        return 1;
    }

    // Obtain file name & create file
    const char *file_name = argv[1];
    FILE *file = fopen(file_name, "r");

    // File error handling
    if (file == NULL) {
        printf("Error: Error retrieving and opening file name.")
        return 1;
    }

}