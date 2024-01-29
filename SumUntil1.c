# include<stdio.h>
int main(){
    int num;
    printf("Enter the number to find the sum of digit\n");
    scanf("%d",&num);
    int dig,sum;
    do{
        for(sum=0;num!=0;num/=10){
            dig=num%10;
            sum+=dig;
        }
        printf("%d-->",sum);
        num=sum;
    }while(num/10!=0);
}