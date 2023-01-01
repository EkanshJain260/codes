#include<stdio.h>
void pattern(int n){
    for (int i=1;i<=n;i++){
        if(i==1 ||i==n){
            for(int j=1;j<=n;j++){
             printf("*");
            
            }
        }else{
        for(int j=i;j<n;j++){
            printf(" ");
        }
        printf("*");
        }
        printf("\n");
        
    }
}
int main(){
    int n=5;
    pattern(n);
    return 0;
   
    
}