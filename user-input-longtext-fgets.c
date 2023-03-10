#include <stdio.h>
int main(){
    char name[20];
    printf("whats your name:\n");
    fgets(name,20,stdin);
    printf("Your name is %s",name);
    return 0;
}