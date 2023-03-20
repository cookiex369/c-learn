#include<stdio.h>
int main(){
    char line[255];
    FILE *fptr=fopen("employees.txt","r");
    fgets(line,255,fptr);
    fgets(line,255,fptr);
    printf("%s",line);
    fclose(fptr);
    printf("%p\n",fptr);
    return 0;
    //这个指针指向这个文件的内存地址，而不是一个简单的变量内存地址，这是很有用的。
}