#include<stdio.h>
 void insertionsort(int a[],int n){
        for(int i=0;i<n;i++){
            int curr=a[i];
            int prev=i-1;
            while(prev>=0  && curr<a[prev]){
                
            }
        }
    }
int main(){

   
    int arr[]={3,2,1,4,5,9,5};


    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        int l=i;
        for(int j=i+1;j>0;j--){
            if(arr[l]>arr[j]){
                int temp=arr[l];
                arr[l]=arr[j];
                arr[j]=temp;
                
            }
            l--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}