# include<stdio.h>
void tofh(int ndisk,char source,char temp,char dest){
    if(ndisk>0){
        tofh(ndisk-1,source,dest,temp);
        printf("Move disk %d from %c -->%c\n",ndisk,source,dest);
        tofh(ndisk-1,temp,source,dest);
    }
}

int main(){
    char source='S',dest='D',temp='T';
    int ndisk;
    printf("Enter the no. od dish\n");
    scanf("%d",&ndisk);
    tofh(ndisk,source,temp,dest);
}