# include<stdio.h>
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j==0||i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
    }
    printf("Pascal triangle is\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}