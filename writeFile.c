#include<stdio.h>
int main(){
    FILE *fpointer=fopen("employees.txt","w");
    fprintf(fpointer,"mark,saleman\ncookie,stdunt\njack,kid");
    fclose(fpointer);

    FILE *fpointertwo=fopen("employees.txt","a");
    fprintf(fpointertwo,"\nhy,genuine person");
    fclose(fpointertwo);

    FILE *fpointerthree=fopen("employees.txt","a");
    fprintf(fpointerthree,"\nkarolan,beautiful woman");
    fclose(fpointerthree);
}