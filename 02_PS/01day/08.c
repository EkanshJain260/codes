#include<stdio.h>

int main(){
    int x,y;
    printf("enter x coordinate value");
    scanf("%d",&x);
    printf("enter y coordant value");
    scanf("%d",&y);
    if (x>0 && y>0){
        printf("1st quadrant");
    }else if(x>0 &&y<0){
        printf("4th quadrant");
    }else if( x<0 &&y <0){
        printf("3rd quadrant");
    }else if(x<0 && y>0){
        printf("2nd quadrant");
    }else if (x==0 &&y==0){
        printf("origin");
    }
    return 0;
}