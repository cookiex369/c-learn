#include<stdio.h>
#define Pi 3.1415926
void main(){
    const float pi=3.1415926;
    printf("%f\n%f\n",Pi,pi);
}
// define，也就是符号常量，代表一个字符串，在预编译时进行字符替换
// const常变量，会占用存储单元，有变量值，只是值不会改变。