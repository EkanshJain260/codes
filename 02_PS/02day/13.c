#include<stdio.h>
void sub(int n){
    printf("%d ",n);
        if (n<=0){
            return;
        }
    sub(n-5);
    printf("%d ",n);
}
int main(){
    int n=16;
    sub(n);
    return 0;
}

