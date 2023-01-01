#include<stdio.h>

int main(){
    int n=5;
    int f=1;
    int sum=0;
    for (int i=1;i<=n;i++){
        f*=i;
        sum+=f;
    }
    printf("%d",sum);
    return 0;


}