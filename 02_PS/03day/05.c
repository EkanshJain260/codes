#include<stdio.h>
#include<math.h>

int main(){
    int x=4;
    int f=1;
    int sum=0;
    int n=5;
    for (int i=1;i<=n;i=2*i-1){
        for (int j=1;j<=i;j++){
       f*=i;
        }
       sum+=(pow(x,i)/f);
    }
    printf("%d",sum);
    return 0;
}