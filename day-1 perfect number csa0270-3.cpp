#include<stdio.h>  
#include<conio.h>  
int main()  
{    
int num, rem, sum = 0, i;    
printf("Enter a number:");  
scanf("%d", &num);        
for(i = 1; i < num; i++)  
               {  
                    rem = num % i;  
                    if (rem == 0)  
                            {  
                                sum = sum + i;  
                            }  
                }  
if (sum == num)  
            printf("it is a Perfect Number");  
        else  
            printf("it is not a Perfect Number");  
getch();  
}  

