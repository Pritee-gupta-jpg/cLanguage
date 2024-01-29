# include<stdio.h>
# include<stdlib.h>
void convert(int,int);
int main(){
    int base,num,choice;
    while(1){
        printf("1.Binary\n2.Octal\n3.Hexadecimal\n4.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:base=2;
                break;
            case 2:base=8;
                break;
            case 3:base=16;
                break;
            case 4:exit(0);
            default:printf("wrong choice\n");
                continue;
        }
        printf("Enter the number in decimal\n");
        scanf("%d",&num);
        convert(num,base);
        printf("\n");
    }
}


void convert(int num,int base){
    int rem;
    rem=num%base;
    num/=base;
    if(num>0){
        convert(num,base);
    }
    if(rem<10){
        printf("%d",rem);
    }
    else{
        printf("%c",rem-10+'A');
    }
}