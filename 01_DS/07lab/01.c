// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *b=*a;
//     *a=temp;
// }
// void print(int a[],int n){
//     for(int i=0;i<n;i++ ){
//         printf("%d",a[i]);
//     }
// }
// void bubblesort(int a[],int n){
//     for (int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(&a[j],&a[j+1]);
//             }
//         }
//     }
    
// }
// int main(){
//     int n;
//     printf("enter the no of elements");
//     scanf("%d",&n);

//     int a[n];
//     printf("enter the elements");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     bubblesort(a,n);
//     print(a,n);
// }

#include <stdio.h>
 
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
int main()
{
    int n;
    printf("enter the no of array");
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array:");
    printArray(arr, n);
    return 0;
}