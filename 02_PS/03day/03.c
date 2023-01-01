#include<stdio.h>
#include<math.h>

int main(){
    int x=5,n=7;
    int f=1,i;
    int sum=1;
    for (i=1;i<=n;i++){
        f=f*i;
       sum=sum+(pow(x,i)/f);
       

    }
    printf("%d",sum);
    
    return 0;
    
}