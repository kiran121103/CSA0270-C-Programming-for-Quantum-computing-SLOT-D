#include <stdio.h>
int main() {
int num, sum = 0, rem;
printf("Enter a number: ");
scanf("%d", &num);
for (; num != 0; num /= 10) {
rem = num % 10;
sum += rem;
}
printf("Sum of digits: %d\n", sum);
return 0;
}

