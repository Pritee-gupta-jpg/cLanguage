# include<stdio.h>
int main(){
    FILE *fptr;
    int i;
    fptr=fopen("putw.txt","w");
    if(fptr==NULL){
        printf("file cann't be openend\n");
    }
    else{
        for(int i=1;i<=10;i++){
            putw(2*i,fptr);
        }
    }
    fclose(fptr);
}