# include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("fprintf.txt","w");
    char name[10];
    int age;
    printf("Enter your name and age\n");
    scanf("%s %d",name,&age);
    fprintf(fptr," name is :%s and age is: %d",name ,age);
    fclose(fptr);
}