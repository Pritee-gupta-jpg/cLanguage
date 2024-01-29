# include<stdio.h>
int main(){
    FILE *fptr;
    char str[80];
    fptr=fopen("fputs.txt","r");
    while((fgets(str,80,fptr))!=NULL){
        puts(str);
    }
    fclose(fptr);
}