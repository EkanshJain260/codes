#include<stdio.h>
void pattern(int n){
   for (int i=1;i<=n;i++){
      for(int j=i;j<n;j++){
         printf(" ");
      }
      for (int j=1;j<=2*i-1;j++){
         printf("*");

      }
      printf("\n");
   }
      
   }
void main()
{
   pattern(5);
   //  int i,j,k,n;
   //  printf("Enter the value of n:\n");
   //  scanf("%d",&n);
   //  for ( i = 1; i <=n; i++)
   //  {
   //     for ( k = n; k>i ; k--)
   //     {
   //        printf(" ");
   //     }
   //     for ( j = 1; j <=2*i-1 ; j++)
   //     {
   //        printf("*");
   //     }
   //      printf("\n");
      
   //  }
    
}