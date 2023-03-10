#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("cox.txt","r");
    char myString[100];
    fgets(myString,100,fptr);
    printf("%s",myString);
    printf("------------\n");
    while(fgets(myString,100,fptr)){
        printf("%s\n",myString);
    }
    fclose(fptr);
    return 0;
}