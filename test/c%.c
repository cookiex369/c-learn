#include <stdio.h>
void main(void){
    int a=1;
    int b=1234;
    double c=1.2345678;

    printf("%2d\n",a);
    printf("%+2d\n",a);
    printf("%4d\n",a);
    printf("%04d\n",a);
    printf("%2d\n",b);
    printf("%+2d\n",b);
    printf("%4d\n",b);
    printf("%2.4f\n",c);
    printf("%f\n",100/15);
    printf("%d\n",100%15);
    //%是求余运算符
//  M        %md    以宽度m输出整型数，不足m时，左补空格
// 0m       %0md   以宽度m输出整型数，不足m时，左补零
// m,n      %m.nf 以宽度m输出实型小数，小数位为n位 
}