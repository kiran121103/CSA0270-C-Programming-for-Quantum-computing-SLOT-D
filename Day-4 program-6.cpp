#include<stdio.h>
union my_union{
	int integer;
	char string[50];
};
int main(){
	union my_union u;
	printf("enter the value: ");
	if(scanf("%d",&u.integer)==1){
		printf("the value %d was stored in the integer field of union.\n",u.integer);
	}else{
		scanf("%s",u.string);
		printf("the value %s was stored in the string field of union.\n",u.string);
	}
	return 0;
}
