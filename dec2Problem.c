# include<stdio.h>
int main(){
    int a=5;
    begin:
    if(a){
        printf("%d\t",a);
    }//infinte loop it will skip when a=0 
    a--;
    goto begin;
}