#include <stdio.h>
union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};
int main() {
    union shape s;
    char choice;
    printf("Enter the type of shape (c for circle, r for rectangle): ");
    scanf("%c", &choice);
    float area;
    if (choice == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);
        area = 3.14 * s.radius * s.radius;
    } else if (choice == 'r') {
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &s.rectangle.length, &s.rectangle.width);
        area = s.rectangle.length * s.rectangle.width;
    } else {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("The area of the shape is: %.2f\n", area);   
    return 0;
}
