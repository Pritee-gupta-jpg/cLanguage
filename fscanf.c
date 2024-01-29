# include<stdio.h>
struct student{
    char name[10];
    int age;
}stu;
int main(){
    FILE *fptr;
    fptr=fopen("fprintf.txt","r");
    printf("Name\t age \n");
    while(fscanf(fptr,"%s %d",stu.name,&stu.age)!=EOF){
        printf("%s\t %d\n",stu.name,stu.age);
    }
    fclose(fptr);

}