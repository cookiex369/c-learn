#include <stdio.h>
int main(){
    int max();
    extern int A,B,C;
    printf("Please enter three integer numbers:");
    scanf("%d%d%d",&A,&B,&C);
    printf("max is %d\n",max());
    return 0;
}

int A,B,C;

int max(){
    int m;
    m=A>B?A:B;
    //c语言中唯一的三目运算符；可以看成if(A>B){return A;}else{return B;}
    //如果A>B为真执行前面的表达式，为假时执行后面的表达式
    //进阶版result=a>b?"x":(a>c?"y":"z")
    if(C>m) m=C;
    return(m);
}