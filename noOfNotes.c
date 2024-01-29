# include<stdio.h>
int main(){
    int n,choice,notes=0;
    printf("the available choice for the notes are :(100,50,20,10,5,2,1)\n");
    printf("Enter the amount you want to withdraw\n");
    scanf("%d",&n);
    printf("Enter you starting choice of notes to withdraw\n");
    scanf("%d",&choice);
    switch(choice){
        default:printf("Enter any valid value\n");
        break;
        case 100:
            notes=n/100;
            printf("No. of Rs.100 notes = %d\n",notes);
            n=n%100;
        case 50:
            notes=n/50;
            printf("No. of Rs.50 notes= %d\n",notes);
            n=n%50;
        case 20:
            notes=n/20;
            printf("No. of Rs.20 notes= %d\n",notes);
            n=n%20;
        case 10:
            notes=n/10;
            printf("No. of Rs.10 notes= %d\n",notes);
            n=n%10;
        case 5:
            notes=n/5;
            printf("No. of Rs.5 notes= %d\n",notes);
            n=n%5;
        case 2:
            notes=n/2;
            printf("No. of Rs.2 notes= %d\n",notes);
            n=n%2;
        case 1:
            notes=n/1;
            printf("no. of Rs 1 notes= %d\n",notes);

    }

}