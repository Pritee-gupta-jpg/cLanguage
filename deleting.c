# include<stdio.h>
# include<stdlib.h>
# include<string.h>
struct record{
    char name[15];
    int roll;
    float marks;
}student;
int main(){
    FILE *fptr,*fmptr;
    char name[15];
    int flag=0;
    fptr=fopen("stuRecord.txt","rb");
    if(fptr==NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    printf("enter the name to be deleted\n");
    scanf("%s",name);
    fmptr=fopen("temp.txt","wb");
    while(fread(&student,sizeof(student),1,fptr)==1){
       if(strcmp(student.name,name)!=0){
        fwrite(&student,sizeof(student),1,fmptr);
       }
       else{
        flag=1;
       }
    }
    fclose(fptr);
    fclose(fmptr);
    remove("stuRecord.txt");
    rename("temp.txt","stuRecord.txt");
    if(flag==0){
        printf("Name is not found\n");
    }
    else{
        printf("Record deleted...\n");
    }

}