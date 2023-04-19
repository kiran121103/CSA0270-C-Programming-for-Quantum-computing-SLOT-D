#include<stdio.h>
main()
{
    int a[2][2],i,j;
	long determinant;
	printf("enter the 4 elements of matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\n the matrix is\n");
	{
	for(i=0;i<2;i++)
    {
	printf("\n");
	for(j=0;j<2;j++)
	printf("%d\t",a[i][j]);
}
}
determinant=a[0][0]*a[1][1]-a[1][0]*a[0][1];
printf("\n determinant of 2x2 matrix: %1d",determinant);
}
