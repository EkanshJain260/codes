#include<stdio.h>
    int maxday(int arr[],int n){
        int max=arr[0];
        for (int i=0;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
int main(){
    printf("enter the no of candle");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d the maximum no of day the candles would last",maxday(arr,n));
    
    return 0;
}