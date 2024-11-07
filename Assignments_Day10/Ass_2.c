/* A2.Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111 

***********************************************************************************************************/


#include <stdio.h>
int digits(int);
int main() {
    int n,c=0,i;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;c!=n;i++)
   {
   	     if(digits(i)==1)
             	    c=c+1;
            	   /*printf("c:%d",c);
    }
    printf("ans:%d",--i);
    
    return 0;
}
   
    int digits(int n){
       	 int i, digit;
        	while(n>0)
{
          		 /* printf("\nn:%d\n",n);
            		digit= n%10;
          		 /* printf("digit:%d\t",digit);
            		n=n/10;
            		if(digit !=1 && digit!=4 && digit!=6 && digit!=9)
              			   return 0;
        }
        return 1;
    }
