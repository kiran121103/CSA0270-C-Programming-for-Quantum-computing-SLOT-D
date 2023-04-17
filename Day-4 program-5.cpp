#include <stdio.h>
struct rectangle {
  float width;
  float height;
};
int main() {
  struct rectangle r;
  float area;
  printf("Enter the width of the rectangle: ");
  scanf("%f", &r.width);
  printf("Enter the height of the rectangle: ");
  scanf("%f", &r.height);
  area = r.width * r.height;
  printf("The area of the rectangle is: %.2f", area);
  return 0;
}
