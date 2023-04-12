#include <stdio.h>
int main() {
int start, end, count = 0, sum = 0;
printf("Enter the start and end of range: ");
scanf("%d%d", &start, &end);
for(int i = start; i <= end; i++) {
if(i % 5 == 0) {
count++;
sum += i;
}
}
printf("Number of integers divisible by 5: %d\n", count);
printf("Sum of integers divisible by 5: %d\n", sum);
return 0;
}

