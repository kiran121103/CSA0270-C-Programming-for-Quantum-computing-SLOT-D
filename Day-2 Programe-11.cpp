#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0;
    float average;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = (float) sum / n;
    printf("Sum of the elements in the array = %d\n", sum);
    printf("Average of the elements in the array = %f\n", average);
    
    return 0;
}
