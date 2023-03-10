#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("cox.txt","w");
    fprintf(fptr,"Some text,And you,ve made it,well done!");
    fclose(fptr);
    return 0;
}