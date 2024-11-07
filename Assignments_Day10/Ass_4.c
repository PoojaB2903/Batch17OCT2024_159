 /*A4.rotate array every kth element
1 2 3 4 5 6 7 8 9
k= 3
3 2 1 6 5 4 9 8 7 */ 
------------------------------------------
#include <stdio.h>
int * rotate(int [],int);
int main() {
    
    int *b=NULL;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int key,i;
    printf("\nEnter key:");
    scanf("%d",&key);

    rotate(arr,key);
    for(i=0;i<9;i++)
      	printf("%d\t", arr[i]);
    return 0;
}

int* rotate(int a[],int key){
    int i,j,l,t;
    for( i=0;i<9;i=i+key)
    {   
        /*printf("\ni:%d\n",i);
         l=(i+key-1);
        for(j=i;j<(i+l)/2;j++)
         {
            	t=a[key+i-1];
           	 a[key+i-1]=a[j];
            	a[j]=t;
           	 /*printf("\nj:%d\n",j);
            }
            /*printf("\n");
        }
    /*return a;
}

