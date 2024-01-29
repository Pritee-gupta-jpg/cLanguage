# include<stdio.h>
int main(){
    int a;
    begin://infitnite times 5
    a=5;
    begin:// 5 4 3 2 1
    if(a){
        printf("%d\t",a);
        a--;
        goto begin;
    }
}