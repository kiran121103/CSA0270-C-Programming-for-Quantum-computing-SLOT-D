#include <stdio.h>

int main() {
    int n, i, j, temp;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int second_largest = arr[1];
    int second_smallest = arr[n - 2];
    avg = (float) (second_largest + second_smallest) / 2;
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            printf("The average %.2f is present in the array.", avg);
            return 0;
        }
    }
    printf("The average %.2f is not present in the array.", avg);
    return 0;
}
