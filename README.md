# C_File_Handling_and_Performance

### Description:
The "C_File_Handling_and_Performance" GitHub repository is designed to demonstrate and explore various aspects of file handling, memory management, and performance measurement in C programming. It contains three distinct tasks, each focused on different methods of interacting with file systems and analyzing program performance.

### Getline Usage (getline_program.c): 
This program utilizes the getline function to read from a file, specified as a command-line argument, and prints the last two lines of the file. It handles edge cases where the file has fewer than two lines and reports any issues encountered when opening the file. The program is designed to manage memory efficiently, using strdup and free to handle dynamic memory allocations. Valgrind is used to ensure all memory is properly freed before program termination. This task demonstrates careful memory management and file reading techniques in C.

### Read System Call (read_program.c): 
This program opens a file and reads its contents using the read system call. The size of the read buffer is defined using a #define directive, allowing easy modification of the number of bytes read per system call. The program is structured to measure the performance impact of different buffer sizes on file reading operations, without printing any output to avoid skewing timing results. Running times are recorded for various buffer sizes, and these timings are plotted to analyze system characteristics and performance.

### Fread Library Function (fread_program.c): 
A modification of the previous program, this version uses the fread library function and fopen instead of read and open. Similar to Task 2, it runs with various buffer sizes and measures the execution times. This task allows for a comparison between the system-level read call and the higher-level fread function in terms of performance and efficiency.

