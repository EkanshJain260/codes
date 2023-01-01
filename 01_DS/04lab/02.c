#include<stdio.h>
int binsearch(int a[],int key,int n){
    
int si=0,ei=n-1;
    
    while (si<=ei){
        int mid =si+ei/2;
        if(key==a[mid]){
            return mid;
        
        }

        if(key>a[mid]){
            si=mid+1;
        }
        if(key<a[mid]){
            ei=mid-1;
        }
    }
    return -1;

}
int main(){
    int n,key;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the key");
    scanf("%d",&key);
    int x[n];
    
    printf("enter the elements");
    for (int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("the idx is%d",binsearch(x,key,n));
    
    


}
