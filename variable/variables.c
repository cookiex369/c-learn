#include <stdio.h>
int main(){
    char name[]="cookie";
    int age=22;
    printf("There once a man named %s\n",name);
    printf("He was %d years old\n",age);
    age = 29;
    printf("He really like the name %s\n",name);
    printf("But did not like being %d\n",age);
    return 0;
}