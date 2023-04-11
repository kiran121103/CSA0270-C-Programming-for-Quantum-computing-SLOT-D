#include <stdio.h>
int main() {
   int m, n, temp;
   printf("Enter the value of m: ");
   scanf("%d", &m);
   printf("Enter the value of n: ");
   scanf("%d", &n);
   printf("Before swapping: m = %d, n = %d\n", m, n);
   temp = m;
   m = n;
   n = temp;
   printf("After swapping: m = %d, n = %d\n", m, n);
   return 0;
}
