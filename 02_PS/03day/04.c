#include<stdio.h>
#include<math.h>

int main(){
    int x=4;
    int f=1;
    int n=5;
    int sum=0;
    for (int i=1;i<=n;i++){
        f*=i;
        if (i%2==0){
       sum-=(pow(x,i-1)/f);
        }else{
       sum+=(pow(x,i-1)/f);
            
        }

    }
    printf("%d",sum);
    return 0;
}