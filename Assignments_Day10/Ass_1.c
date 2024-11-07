/* A1. Check whether a given number can be expressed as the sum of two prime number
i/p
Enter a positive integer: 34
Output
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4
NoofWays=-1  */

#include <stdio.h>
int isPrime(int);
int main() 
{
    int n ,l,j,c=0,i;
    int pn[20];
    printf("Enter n value: ");
    scanf("%d",&n);
    for(int i=0,j=0;i<n;i++)
    {
       	 if(isPrime(i)==1)
        	{
            		pn[j]=i;
            		/*printf("%d\n",i);
            		j++;
        	}
         }
      l=sizeof(pn) / sizeof(pn[0]); 
      printf("\n%d size: ",l);
      for(i=0;pn[i]<=n/2;i++)
    {
    	    for(j=l;j>=0;j--)
   		{
        		/*printf("\n %d + %d",pn[i],pn[j]);
        		if(pn[i]+pn[j]==n)
      		  {
        			printf("\n %d + %d",pn[i],pn[j]);
         			c=c+1;
			  }
      	  }
    }
     if(c!=0)  
   	 printf("No.of ways:%d",c);
      else
    	printf("No.of ways : %d",-1);
    return 0;
}

int isPrime(int n)
{  
       int i,f=0;
    	if(n==0 || n==1)
        		return 0;
    	for(i=2;i<=n/2;i++)
	{
        		if(n%i==0)
        		 {
          			f=1;
          			break;
			}
    	}
    	if(f==1)
        		return 0;
    	else
            		return 1;
 }
