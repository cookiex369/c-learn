#include <stdio.h>
int main(){
    const int NUM=5;
    //give a uppercase variables for constants is prety good
    //num=10;  throgh out:error: assignment of read-only variable ‘num’
    //In this case,const*variables can't be change!
    printf("%d\n",NUM);
    printf("%d%s\n",6," and this string are also a constants");
    return 0;
}
// 488754528 “湖师大咨询群”