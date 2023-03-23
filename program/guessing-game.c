#include <stdio.h>

void main(){
    int guessNumber;
    int rightNumber=66;
    int guesscount=0;
    int guesslimit=3;
    int outofftime=0;

    while(guessNumber!=rightNumber && outofftime==0){
        if(guesscount<3){
        printf("%s","Enter a number:");
        scanf("%d",&guessNumber);
        guesscount++;
        }else{
            outofftime=1;
        }
    }
    if(outofftime==0){
                printf("%s\n","You won!");
        }else{
            printf("%s\n","out off times！");
        }
}