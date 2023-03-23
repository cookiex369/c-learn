#include<stdio.h>
int main(){
     char grade='A';
     char *pGrade=&grade;
     printf("%c\n%d\n%p\n%c\n%p\n",*pGrade,*pGrade,pGrade,*&grade,&*&grade);
     return 0;
     //*    dereference sign
     //&    get memory address
}