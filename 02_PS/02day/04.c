#include<stdio.h>

int main(){
    char c='A';
    int k=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<=i;j++){
            printf("%c",c+i+j);
            k++;

        }
    printf("\n");
    }
    return 0;
}