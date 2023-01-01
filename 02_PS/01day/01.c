#include<stdio.h>
int main(){
    int basics;
    char grade;
    int allow;
    printf("enter the salary");
    scanf("%d",&basics);
    printf("enter the grade");
    scanf(" %c",&grade);
    float hra=(.2*basics);
    float da=(.5*basics);
    float pf=(.11*basics);
    if(grade=='A'){
        allow=1700;
    }else if(grade=='B'){
        allow=1500;
    }else{
        allow=1300;
    }
    printf("%d\n",allow);
    int total =basics+hra+da+allow-pf;
    printf("%d is toltal salary ",total);
    return 0;
}
