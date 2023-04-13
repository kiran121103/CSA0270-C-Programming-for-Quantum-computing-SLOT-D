#include <stdio.h>
#include <string.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        int i;
        for (i = left; i <= right; i++) {
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i));
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str) - 1);
    return 0;
}
