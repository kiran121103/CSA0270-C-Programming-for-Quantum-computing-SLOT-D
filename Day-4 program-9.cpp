#include<stdio.h>
#include<math.h>
struct point{
	float x;
	float y;
};
int main() {
	struct point p1,p2;
	float x1,y1,x2,y2;
	printf("enter the coordinates of point1(x1,y1): ");
	scanf("%f %f",&x1,&y1);
	p1.x=x1;
	p1.y=y1;
	printf("enter the coordinates of point2(x2,y2): ");
	scanf("%f %f",&x2,&y2);
	p2.x=x2;
	p2.y=y2;
	float distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("distance between the two points: %.2f",distance);
	return 0;
}
