#include <stdio.h>
union my_union {
    int integer;
    float floating_point;
};
int main() {
    union my_union my_array[5];
    printf("Enter a value for each union:\n");
    for (int i = 0; i < 5; i++) {
        printf("Union %d: ", i+1);
        if (i % 2 == 0) {
            scanf("%d", &my_array[i].integer);
        } else {
            scanf("%f", &my_array[i].floating_point);
        }
    }
    float total = 0;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            total += my_array[i].integer;
        } else {
            total += my_array[i].floating_point;
        }
    }
    printf("The total of all the values in the unions is %f\n", total);

    return 0;
}

