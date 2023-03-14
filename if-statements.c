#include <stdio.h>
int max(int num1,int num2){
    int result;
    if(num1>num2){
        result=num1;
    }else{
        result=num2;
    }
    return result;
}
int main(){
    printf("%d\n",max(999,333));
    printf("%d\n",max(999,999));
    return 0;
}