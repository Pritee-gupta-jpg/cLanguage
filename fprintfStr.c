# include<stdio.h>
struct student{
    char name[15];
    float marks;
}stu;
int main(){
    FILE *fptr;
    fptr=fopen("fprintfStr.txt","w");
    int n;
    printf("Enter teh number of recore=ds of student\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter name and marks\n");
        scanf("%s %f",stu.name,&stu.marks);
        fprintf(fptr,"%s %f",stu.name,stu.marks);
    }
    fclose(fptr);
}