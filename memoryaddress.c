#include<stdio.h>
int main(){
    int age=22;
    double gpa=8.2;
    char grade='A';
    printf("age: %p\ngpa:%p\ngrade:%p\n",&age,&gpa,&grade);
    return 0;
}