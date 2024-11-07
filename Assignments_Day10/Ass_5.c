
/*************************************************************
A5. Write a c program to print alphabet triangle.
Input: 5
Output:
      1
     121
    12321
   1234321
  123454321 
***************************************************************/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter n :");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i+1;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
      return 0;
}

/***********************************************************
Write a c program to print alphabet triangle.
Input: 5
Output:

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA 
***************************************************************/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter n :");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
            putchar(32);
        for(j=1;j<=i;j++)
            putchar(64+j);
        for(j=i+1;j>=1;j--)
            /*printf("%d",j);
            putchar(64+j);
        putchar(10);
    }
      return 0;
}
