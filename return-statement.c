#include <stdio.h>
int cube(int num){
    return num*num*num;
}
int main(){
    printf("plus 3 times is %d\n",cube(9));
    // A function is acturally a variable 
    return 0;
}