/***************************************************************************
A3.Write a program to find the n-th number made of prime digits
Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.
Output Format:
Print the Nth number of sequence and it should be only prime.
Constraints:
1<=T<=100
1<=N<=10000
Examples :
Input :
1
10
Output :
33 */
*******************************************************************************************/
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
   
    int digits(int n)
  {
        int i, digit;
        while(n>0)
        {
           	digit= n%10;
            	n=n/10;
            	If(digit !=2 && digit!=3 && digit!=5 && digit!=7)
                 return 0;
        }
        return 1;
    }
