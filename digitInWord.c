# include<stdio.h>
# include<math.h>
int count(int n){
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}
void printNum(int n){
 switch(n){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:printf("Three ");
                break;
            case 4:printf("Four ");
                break;
            case 5:printf("Five ");
                break;
            case 6:printf("Six");
                break;
            case 7:printf("Seven ");
                break;
            case 8:printf("Eight ");
                break;
            case 9:printf("Nine ");
                break;
            case 0:printf("Zero ");
                break;
        }
}


int main(){
    int n;
    printf("enter the number to print each digit in words\n");
    scanf("%d",&n);
    int cnt=count(n);
    printf("cout is : %d\t",cnt);
    int temp=n,first;
    int q=cnt-1;
    while(cnt>0){
        if(q>=0){
        int div=pow(10,q);
        first=temp/div;
        printNum(first);
        temp=temp%div;
        q--;
        }
        cnt=cnt-1;
    }
}