#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("cox.txt","a");
    fprintf(fptr,"\nSomething new!");
    fclose(fptr);
    return 0;
}