# include<stdio.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    FILE *fptr;
    int choice=1;
    fptr=fopen("stuRecord.txt","ab");
    while(choice ==1){
        printf("Enter name:\t");
        scanf("%s",student.name);
        printf("Enter roll no: \t");
        scanf("%d",&student.roll);
        printf("Enter marks: \t");
        scanf("%f",&student.marks);
        fwrite(&student,sizeof(student),1,fptr);
        printf("Do you want to add more.Press 1 for yesand 0 for no\n");
        scanf("%d",&choice);
    }
    fclose(fptr);
}