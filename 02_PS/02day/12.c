#include<stdio.h>

int main(){
    for(int i=6;i>=1;i--){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=2*(6-i)-1;j++){
            printf(" ");
        }
        for (int j=i;j>=1;j--){
            if (i==6  ){
                if(j==1){
                    break;
                }
                printf("%d",j-1);
                
            }else{
            printf("%d",j);
            }
        }
        printf("\n");
    }
    

    return 0;
}