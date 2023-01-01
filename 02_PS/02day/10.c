#include <stdio.h>

int main()
{
for (int i=1;i<=5;i++){
    if(i<=3){
    for (int j=1;j<i;j++){
        printf(" ");
    }
    for (int j=1;j<=7-2*i;j++){
        printf("*");
    }
    }
    if(i>3){
        if (i==4){
            printf(" ");
            for (int j=1;j<i;j++){
                printf("*");
            }
        }else{
            for(int j=0;j<i;j++){
                printf("*");
            }
        }
    
    }
    printf("\n");
    
}
}
