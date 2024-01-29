# include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    if((fptr=fopen("putc.txt","w"))==NULL){
        printf("File cann't be created\n ");
    }
    else{
        while((ch=getchar())!=EOF){
            putc(ch,fptr);
        }
    }
    fclose(fptr);

}