#include <stdio.h>
union my_data{
	int integer;
	float floating_point;
};
int main(){
	union my_data u;
	float value;
	printf("enter the number:" );
	scanf("%f",&value);
	if(value==(int)value){
		u.integer=(int)value;
		printf("integer: %d\n",u.integer);
	}else{
		u.floating_point=value;
		printf("floating_point: %f\n",u.floating_point);
	}
	return 0;
}
