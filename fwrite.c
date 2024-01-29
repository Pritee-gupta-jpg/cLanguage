# include<stdio.h>
# include<stdlib.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    int i,n;
    FILE *fptr;
    fptr=fopen("stuRecord.txt","wb");
    if(fptr==NULL){
        printf("error in opening file\n");
        exit(1);
    }
    printf("Enter the no. of record\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter name: ");
        scanf("%s",student.name);
        printf("Enter roll no. :");
        scanf("%d",&student.roll);
        printf("Enter marks: ");
        scanf("%f",&student.marks);
        fwrite(&student,sizeof(student),1,fptr);
    }
    fclose(fptr);
}