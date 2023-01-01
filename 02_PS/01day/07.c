#include<stdio.h>

int main(){
    printf("enter the temprature in centigrade");
    float temp;
    scanf("%f",&temp);
    if (temp <0){
        printf("freezing water");

    }else if(temp >=0 && temp<10){
        printf("very cold weather");
    }else if( 10<=temp && temp<20){
        printf("cold weather");
    }else if( 20<=temp && temp<30){
        printf("Normal temprature");
    }else if( 30<=temp && temp<40){
        printf("Its hot");
    }else if( temp>=40){
        printf("Its very hot");
    }
    
    return 0;
}