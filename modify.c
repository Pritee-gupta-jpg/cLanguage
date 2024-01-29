# include<stdio.h>
# include<stdlib.h>
# include<string.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    FILE *fptr;
    char name[15];
    int flag=0;
    fptr=fopen("stuRecord.txt","rb+");
    if(fptr==NULL){
        printf("File can't opened\n");
        exit(1);
    }
    printf("enter the name of student you want to modified\n");
    scanf("%s",name);
    while(fread(&student,sizeof(student),1,fptr)==1){
        if(strcmp(student.name,name)==0){
            printf("enter new data\n");
            printf("enter the name of student:\t");
            scanf("%s",student.name);
            printf("Enter the roll number:\t");
            scanf("%d",&student.roll);
            printf("Enter marks:\t");
            scanf("%f",&student.marks);
            fseek(fptr,-sizeof(student),1);
            fwrite(&student,sizeof(student),1 ,fptr);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Name was not found:\n");
    }
    else{
        printf("Record modified...\n");
    }
    fclose(fptr);
}