# include<stdio.h>
int main(){
    int a,b,x,y,s=0;
    printf("Enter two number to multiple by using Russian peasant method\n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(a>=1){
        if(a%2!=0){
            s=s+b;
        }
        a/=2;
        b*=2;
    }
    printf("The multiplication of %d * %d =%d\n",x,y,s);
}