#include <stdio.h>
#include <string.h>

    struct student {
        char name[50];
        char major[50];
        double gpa;
        int age;
    };
    
    int main(){

        struct student student1;
        strcpy(student1.name,"jim");
        strcpy(student1.major,"art");
        student1.age=22;
        student1.gpa=3.5;

        struct student student2;
        strcpy(student2.name,"cookie");
        strcpy(student2.major,"compter science");
        student2.age=22;
        student2.gpa=4;
        
        printf("%s\n",student2.major);
    }