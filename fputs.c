# include<stdio.h>
int main(){
    FILE *fptr;
    char str[80];
    fptr=fopen("fputs.txt","w");
    printf("enter the line of test\n");
    printf("to stop enter ctrl+z\n");
    while(gets(str)!=NULL){
        fputs(str,fptr);
    }
    fclose(fptr);
}