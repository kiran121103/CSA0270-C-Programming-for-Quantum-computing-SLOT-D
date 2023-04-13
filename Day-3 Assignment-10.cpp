#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    printf("The original string is: %s\n", str);

    reverseString(str);

    printf("The reverse of the string is: %s\n", str);

    return 0;
}
void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

