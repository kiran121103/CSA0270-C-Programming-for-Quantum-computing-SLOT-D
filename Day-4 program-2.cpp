#include <stdio.h>
union my_union {
    int integer;
    float floating_point;
};
int main() {
    union my_union u;
    u.integer = 10;
    u.floating_point = 3.14;
    printf("Value of integer field: %d\n", u.integer);
    printf("Value of floating_point field: %.2f\n", u.floating_point);
    printf("Value of union: %d\n", u.integer); 
    return 0;
}

