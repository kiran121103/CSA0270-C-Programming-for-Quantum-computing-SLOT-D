#include<stdio.h>
struct employee{
	char name[50];
	float salary;
	int age;
};
int main(){
	struct employee e1[5];
	for(int i=0;i<5;i++){
		printf("enter information for employee %d:\n",i+1);
		printf("name: ");
		scanf("%s",e1[i].name);
		printf("salary: ");
		scanf("%f",&e1[i].salary);
		printf("age: ");
		scanf("%d",&e1[i].age);
	}
	printf("\ninformation for all employees;\n");
	for(int i=0;i<5;i++){
		printf("employee %d:\n",i+1);
		printf("name: %s\n",e1[i].name);
		printf("salary: %.2f\n",e1[i].salary);
		printf("age: %d\n",e1[i].age);
	}
	return 0;
}

