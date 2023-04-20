#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char line[MAX_LINE_LENGTH];
    FILE* input_file = fopen("input.txt", "r");
    if (!input_file) {
        printf("Failed to open input file.\n");
        return 1;
    }
    FILE* output_file = fopen("output.txt", "w");
    if (!output_file) {
        printf("Failed to open output file.\n");
        fclose(input_file);
        return 1;
    }
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
        char* pos = line;
        while ((pos = strstr(pos, "red"))) {
            memcpy(pos, "blue", strlen("blue"));
            pos += strlen("blue");
        }
        fputs(line, output_file);
    }
    fclose(input_file);
    fclose(output_file);
    printf("Replaced 'red' with 'blue' and wrote to output.txt.\n");
    return 0;
}

