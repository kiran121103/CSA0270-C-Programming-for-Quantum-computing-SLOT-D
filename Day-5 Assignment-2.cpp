#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.bin", "rb"); 
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    int num;
    float fnum;
    char str[100];
    fread(&num, sizeof(int), 1, fp);
    fread(&fnum, sizeof(float), 1, fp);
    fread(str, sizeof(char), 100, fp);

    printf("Number: %d\n", num);
    printf("Float: %f\n", fnum);
    printf("String: %s\n", str);

    fclose(fp); 
    return 0;
}

