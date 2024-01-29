# include<stdio.h>
# include<stdlib.h>
int main(){
    int n,m,p,num,i,j,d1,d2,d3,k;
    for(num=100;num<=(999)/3;num++){
        for(i=num;i<=3*num;i+=num){
            k=i;
            d1=k%10;
                k/=10;
            d2=k%10;
                k/=10;
            d3=k%10;
                k/=10;
            if((d1==d2)||(d2==d3)||(d3==d1)){
                goto nextnum;
            }
        }
        for(m=num;m>0;m/=10){
            d1=m%10;
            for(n=2*num;m>0;m/=10){
                d2=n%10;
                for(p=3*num;p>0;p/=10){
                    d3=p%10;
                    if((d1==d2)||(d2==d3)||(d3==d2))
                        goto nextnum;
                }
            }
        }
        printf(" %d %d %d \n",num,2*num,3*num);
        nextnum:
    }
}