# include<stdio.h>
# include<stdlib.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    FILE *fptr;
    fptr=fopen("stuRecord.txt","rb");
    if(fptr==NULL){
        printf("Cannot open file\n");
        exit(1);
    }
    printf("NAME\t ROLL_NO\t MARKS\n");
    while(fread(&student,sizeof(student),1,fptr)==1){
        printf("%s\t",student.name);
        printf("%d\t",student.roll);
        printf("%.3f\n",student.marks);
    }
    fclose(fptr);
}