#include<stdio.h>

int main(){
    printf("enter the three num.");
    int a,b,c;
    scanf("%d %d %d",&a ,&b, &c);
    if (a>b){
        if(a>c){
            printf("a is greatest %d",a);
        }else{
            printf("c is greatest %d",c);
        }
    }
    else if(a<b){
        if(b>c){
            printf("b is greatest %d",b);
        }
        else{
            printf("c is greatest %d",c);
        }


    }
    return 0;
}

//5,3,6
//if (a>b && a>c){
//     return a;
// }else if(b>c){
//     return b;

// }else{
//     return c;
// }