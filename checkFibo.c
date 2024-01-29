
# include<stdio.h>
# include<limits.h>
# include<stdlib.h>
void checkfibo(int n){
    int a=0,b=1,c;
    int max=INT_MAX;
    for(int i=0;i<max;i++){
        if(a==n){
            printf("The given number %d is the %d th term of fibo series\n",n,i+1);
            exit(0);
        }
        c=a+b;
        a=b;
        b=c;
    }
    printf("Not a fibo term\n");
}


int main(){
    int n;
    printf("Enter the term you want to check for the fibo term\n");
    scanf("%d",&n);
    checkfibo(n);
}