# include<stdio.h>
int main(){
    int i=0,j=0,l=0,u=2;
    int a[3][3]={0};
    for(int num=1;num<=3*3;num++){
        a[i][j]=num;
        if(i==l &&j<u){
            j++;
        }
        else if(i==u && j>l){
            j--;
        }
        else if(j==l && i>l){
            i--;
        }
        else if(j==u && i<u){
            i++;
        }
        if(a[i][j]!=0){
            l++;
            u--;
            i++;
            j++;
        }
    }
    printf("Spiral amtrix is \n");
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}