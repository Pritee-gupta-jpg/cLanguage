# include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    if((fptr=fopen("text.txt","r"))==NULL){
        printf("file doesn't exist\n");
    }
    else{
        while((ch=fgetc(fptr))!=EOF){
            printf("%c",ch);
        }
    }
    fclose(fptr);
}