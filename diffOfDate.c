# include<stdio.h>
int main(){
    int d1,m1,y1,d2,m2,y2,d,m,y;
    printf("Enter the date in such a way ,so that the first date falls before second date\n");
    printf("Enter First date (DD/MM/YYYY)\n");
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("Enter the second Date(DD/MM/YYYY)\n");
    scanf("%d %d %d",&d2,&m2,&y2);
    if(d2<d1){
        if(m2==2){
            if(y2%4==0 && y2%100!=0 && y2%400==0){
                d2=d2+29;
            }
            else{
                d2=d2+28;
            }
        }
        if(m2==5 || m2==7 || m2==10 || m2==12){
            d2=d2+30;
        }
        else{
            d2=d2+31;
        }
         m2=m2-1;
    }
    if(m2<m1){
        y2=y2-1;
        m2=m2+12;
    }
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    printf("The difference of the two date is given as :\n");
    printf("%d days %d month %d year",d,m,y);
}