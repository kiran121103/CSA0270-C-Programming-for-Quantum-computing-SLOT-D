#include <stdio.h>
int main() {
    int arr[] = {16, -18, 27, -16, 23, -21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    printf("Number of negative numbers in the array: %d", count);
    
    return 0;
}
