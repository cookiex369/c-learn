#include <stdio.h>
int main(){
    char grade='F';
    switch (grade){
        case 'A' :
        printf("you did great!\n");
        break;
        case 'B' :
        printf("you did alright!\n");
        break;
        case 'C' :
        printf("you did poorly!\n");
        break;
        case 'D' :
        printf("you did very bad!\n");
        break;
        case 'E' :
        printf("you failed!\n");
        break;
        default :
        printf("Invaild grade!\n");
    }
}