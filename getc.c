# include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    if((fptr=fopen("text.txt","r"))==NULL){
        printf("File doesn't exist\n");
    }
    else{
        while((ch=getc(fptr))!=EOF){
            printf("%c",ch);
        }
    }
    fclose(fptr);
}