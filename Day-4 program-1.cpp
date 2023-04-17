#include <stdio.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct person p1 = {"John Doe", 23, 5.7};
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}

