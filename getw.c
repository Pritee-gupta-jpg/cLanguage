# include<stdio.h>
int main(){
    FILE *fptr;
    int i;
    fptr=fopen("putw.txt","r");
    if(fptr==NULL){
        printf("CAnnt open the file\n");
    }
    else{
        while((i=getw(fptr))!=EOF){
            printf("%d\n",i);
        }
    }
}