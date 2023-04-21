#include <stdio.h>
int main(){
        for(unsigned long i=1;i<99999999;i++){
            printf("%ld\n",i);
            for(long j=1;j<999;j++){
                printf("%ld\n",j);
            }
        }
}