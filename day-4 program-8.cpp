#include<stdio.h>
union my_union{
	int integer;
	float floating_point;
	char string[50];
};
int main(){
	union my_union u;
	printf("enter the value: ");
	scanf("%f",&u.floating_point);
	if((int)u.floating_point==u.floating_point){
		u.integer = (int)u.floating_point;
		printf("the value %d stores in the integer field of union.\n",u.integer);
	}else if(u.floating_point!=0.0f){
		printf("the value %f stores in the floating_point field of union.\n ",u.floating_point);
    }else{
    	scanf("%s",u.string);
    	printf("the value %s stores in the string field of union.\n",u.string);
	}
	return 0;
}
