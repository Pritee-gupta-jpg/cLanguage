# include<stdio.h>
int main(){
    int a,b,x,y;
    printf("enter the two number to find lcm and hcf\n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    while(a!=b){
        if(a<b)
        a=a+x;
        else
        b=b+y;
    }
    printf("Lcm of %d %d is %d\n",x,y,b);
    a=x;
    b=y;
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    printf("The hcf of %d %d is %d\n",x,y,a);
}