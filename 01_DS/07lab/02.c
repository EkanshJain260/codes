#include<stdio.h>
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int a[]={3,2,4,6,1};
    int len=5;
    int temp;
    for (int i=0;i<len;i++){
        int minpos=i;
        for (int j=i+1;j<len;j++){
            if (a[minpos]>a[j]){
                minpos=j;
            }
        temp=a[i];
        a[i]=a[minpos];
        a[minpos]=temp;

        }
    }
    print(a,len);
    return 0;
}