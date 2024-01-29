# include<stdio.h>
int main(){
    int a[3][3];
    int i=2,j=1;
    for(int num=1;num<=9;num++){
        a[i][j]=num;
        i++;
        j--;
        if(num%3==0){
            i-=2;
            j++;
        }
        if(i==3){
            i=0;
        }
        if(j==-1)
        j=2;//3-1;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}