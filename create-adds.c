#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hell.txt","w");
    fprintf(fptr,"hello cookie!");
    char hel[100];
    fgets(hel,100,fptr);
    printf("%s",hel);
    fclose(fptr);
    return 0;
}
//false;