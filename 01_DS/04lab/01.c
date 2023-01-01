#include<stdio.h>

int main(){
    int n,key;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the key");
    scanf("%d",&key);
    int a[n];
    
    printf("enter the elements");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for (int i=0;i<n;i++){
        if (key==a[i]){
            printf("enement found at index %d",i);
        }
    }

    return 0;
}