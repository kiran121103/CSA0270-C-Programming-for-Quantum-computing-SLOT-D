#include <stdio.h>
int main() {
int num, rev = 0, remainder;
printf("Enter an integer: ");
scanf("%d", &num);
for (; num != 0; num /= 10) {
remainder = num % 10;
rev = rev * 10 + remainder;
}
printf("Reverse of %d = %d\n", num, rev);
return 0;
}

