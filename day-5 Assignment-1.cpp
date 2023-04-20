#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }
    FILE *error_log_file = fopen("error_log.txt", "w");
    if (error_log_file == NULL) {
        printf("Error opening error log file\n");
        return 1;
    }
    char line[1024];
    while (fgets(line, 1024, input_file) != NULL) {
        if (strstr(line, "error") != NULL) {
            fputs(line, error_log_file);
        }
    }
    fclose(input_file);
    fclose(error_log_file);
    error_log_file = fopen("error_log.txt", "r");
    if (error_log_file == NULL) {
        printf("Error opening error log file\n");
        return 1;
    }
    printf("Error log:\n");
    while (fgets(line, 1024, error_log_file) != NULL) {
        printf("%s", line);
    }
    fclose(error_log_file);
    return 0;
}

