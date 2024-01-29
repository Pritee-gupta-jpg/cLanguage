# include<stdio.h>
struct student{
    char name[15];
    float marks;
}stu;
int main(){
    FILE *fptr;
    fptr=fopen("fprintfStr.txt","r");
    printf("NAME \t MARKS\n");
    while(fscanf(fptr,"%s %f",stu.name,&stu.marks)!=EOF){
        printf("%s\t%.3f\n",stu.name,stu.marks);
    }
    fclose(fptr);
}