# include<stdio.h>
# include<math.h>
int main(){
    int n;
    printf("enter teh number upto which you want to check for pythagorean triplets\n");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                int big=pow(k,2);
                int small=pow(j,2)+pow(i,2);
                if(small==big){
                    printf("Pythagorean triplet x2+y2=z2 is %d %d %d\n",i,j,k);
                }
            }
        }
    }
}