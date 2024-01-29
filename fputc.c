# include<stdio.h>
int main(){
    FILE *fptr;
    int ch;
    if((fptr=fopen("text.txt","w"))==NULL){
        printf("File doesnot exits\n");
    }
    else{
        printf("enter test : \n");
        //press ctrl+z to stop reading character
        while((ch=getchar())!=EOF){
            fputc(ch,fptr);
        }

    }
    fclose(fptr);
}