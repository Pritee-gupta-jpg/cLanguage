
# include<stdio.h>
# include<string.h>
int str_to_i(char str[]){
    int i,num=0;
    if(str[0]=='-')
    i=1;
    else
    i=0;
    while(i<strlen(str)){
        num=num*10+(str[i++]-48);
    }
    if(str[0]=='-'){
        return -num;
    }
    else {
        return num;
    }
}
int main(){
    char str[20];
    printf("Enter a number to be strore in string:\n");
    scanf("%s",str);
    printf("%d\t",str_to_i(str));
}
