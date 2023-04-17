#include<stdio.h>
#include<string.h>

struct student {
   int roll_no;
   char stud_name[50];
   int mark1, mark2, mark3;
   float total_marks, avg_marks;
} s[10];

int main() {
   int i, j, n;
   struct student temp;

   printf("Enter the number of students: ");
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
      printf("\nEnter details of student %d:\n", i + 1);
      printf("Enter Roll No: ");
      scanf("%d", &s[i].roll_no);
      printf("Enter Name: ");
      scanf("%s", s[i].stud_name);
      printf("Enter marks for 3 subjects:\n");
      scanf("%d%d%d", &s[i].mark1, &s[i].mark2, &s[i].mark3);
      s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
      s[i].avg_marks = s[i].total_marks / 3;
   }
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (s[i].total_marks < s[j].total_marks) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }
   printf("\nSorted student details:\n");
   for (i = 0; i < n; i++) {
      printf("\nRoll No: %d\n", s[i].roll_no);
      printf("Name: %s\n", s[i].stud_name);
      printf("Total Marks: %.2f\n", s[i].total_marks);
      printf("Average Marks: %.2f\n", s[i].avg_marks);
   }
   
   return 0;
}

