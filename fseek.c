#include<stdio.h>
# include<stdlib.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;

int main(){
    int n;
    FILE *fptr;
    fptr=fopen("stuRecord.txt","rb");
    if(fptr==NULL){
        printf("Cannt read from file\n");
        exit(1);
    }
    printf("enter the number of records to be read\n");
    scanf("%d",&n);
    fseek(fptr,(n-1)*sizeof(student),0);
    fread(&student,sizeof(student),1,fptr);
    printf("%s\n",student.name);
    printf("%d\n",student.roll);
    printf("%.3f\n",student.marks);
    fclose(fptr);
}
