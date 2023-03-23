#include <stdio.h>
int main(){
     int age=22;
     int *pAge=&age;
     char grade='A';
     char *pGrade=&grade;
     double gpa=3.2;
     double *pGpa=&gpa;
     printf("%d\n%c\n%d\n%p\n",*pAge,*&grade,*&grade,pGpa);
     return 0;
}