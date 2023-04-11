#include <stdio.h>
#include <math.h>
int main() {
int start, end, i, num, digit, sum;
printf("Enter the starting and ending intervals: ");
scanf("%d %d", &start, &end);
printf("Armstrong numbers between %d and %d are: ", start, end);
for(i=start; i<=end; i++) {
sum = 0;
num = i;
int n = log10(num) + 1;
while(num != 0) {
digit = num % 10;
sum = sum + pow(digit,n);
num = num / 10;
}
if(i == sum)
printf("%d ", i);
}
return 0;
}

