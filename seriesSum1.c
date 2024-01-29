/*
series =1+2+4+7+11+16+.........
*/
# include<stdio.h>
int main(){
    int sum=0,prev=0;
    int n;
    printf("enter the number till which you want to print sum\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=(i+prev);
          prev=sum;
        

    }
    printf("The sum= %d",sum);
}