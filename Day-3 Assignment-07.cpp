#include <stdio.h>
int main() {
    char str[100];
    int sum = 0;
    printf("Enter the string : ");
    fgets(str, 100, stdin); 
    for(int i = 0; str[i] != '\0'; i++) {
        sum += str[i];
    }
    printf("Sum of all characters : %d\n", sum);

    return 0;
}

