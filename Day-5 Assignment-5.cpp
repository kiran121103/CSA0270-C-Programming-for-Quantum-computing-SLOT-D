#include <stdio.h>
#include <stdlib.h>

#define NUM_LETTERS 26

int main(void) {
    FILE *in_file = fopen("data.txt", "r");
    if (in_file == NULL) {
        perror("Failed to open input file");
        exit(EXIT_FAILURE);
    }
    int counts[NUM_LETTERS] = {0};
    int c;
    while ((c = fgetc(in_file)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            counts[c - 'A']++;
        }
    }
    fclose(in_file);
    FILE *out_file = fopen("statistics.txt", "w");
    if (out_file == NULL) {
        perror("Failed to open output file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < NUM_LETTERS; i++) {
        fprintf(out_file, "%c: %d\n", 'A' + i, counts[i]);
    }
    fclose(out_file);
    
    printf("Statistics written to statistics.txt\n");
    return 0;
}

