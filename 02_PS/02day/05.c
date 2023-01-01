#include<stdio.h>

int main(){
    char ch='A';
    int n=7;
    for (int i=n;i>=1;i--){
        for (int j=i;j<=n;j++){
            printf("%c",ch+j-1);
        }
        printf("\n");
    }

    return 0;
}