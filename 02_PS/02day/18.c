#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,k=0;
    printf("Enter string ");
    char str[10];
    gets(str);
    int n=strlen(str);
    

        printf("\n");
    for ( i = 1 ;i<=n;i++)
    {
       for (j=1; j <i; j++)
       {
        printf(".");
        
       }
       for (int j=i-1;j<n;j++)
       {
        printf("%c",str[j]);
       }

       printf("\n");
       
       
    }

}