#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char file_name[100];
    char search_string[100];

    printf("Enter the name of the file: ");
    scanf("%s", file_name);

    printf("Enter the search string: ");
    scanf("%s", search_string);

    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}

