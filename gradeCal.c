# include<stdio.h>
# include<stdlib.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    FILE *fptr;
    char grade;
    fptr=fopen("stuRecord.txt","rb");
    if(fptr==NULL){
        printf("cannt open file\n");
        exit(1);
    }
    printf("NAME\t ROLL_NO\tMARKS\t GRADE\n");
    while (fread(&student,sizeof(student),1,fptr)==1)
    {
        printf("%s\t\t",student.name);
        printf("%d\t\t",student.roll);
        printf("%.3f\t\t",student.marks);
        if(student.marks>=80){
            printf("A\n");
        }
        else if(student.marks>=60){
            printf("B\n");
        }
        else{
            printf("C\n");
        }
    }
 fclose(fptr);   
}