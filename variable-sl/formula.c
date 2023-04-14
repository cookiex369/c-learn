#include <stdio.h>
int main(){
    int fac(int n);
    int i;
    for(i=1;i<=5;i++)
        printf("%d!=%d\n",i,fac(i));
       return 0;
}
//这里for循环不要curly brakets也可以；如果照着书上打，
//很容易习惯性加上curl brakets，然后又加上return，
//直接退出循环，只输出一个结果，然后程序还没有语法上的错误。
int fac(int n){
    static int f=1;
    f=f*n;
    return (f);
}