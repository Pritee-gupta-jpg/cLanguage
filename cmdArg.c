# include<stdio.h>
# include<stdlib.h>
# include<string.h>
int main(int argc,char *argv){
    int i;
    printf("argument count is %d\n",argc);
    for(i=0;i<argc;i++)
        printf("%s\n",argv[i]);
    
}