#include <stdio.h>
union data {
    int num;
    float fnum;
};

int main() {
    union data input;
    
    printf("Enter a value (integer or float): ");
    if (scanf("%d", &input.num) == 1) {
        printf("You entered an integer: %d\n", input.num);
    } else {
        scanf("%f", &input.fnum);
        printf("You entered a float: %.2f\n", input.fnum);
    }
    
    return 0;
}
