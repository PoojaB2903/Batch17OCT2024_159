/******************************************************************************
* File Name:min_max.c
* Purpose: demo code for cunit. Contains functions getMin() and getMax()
*******************************************************************************/
#define MIN(x, y) \
	x < y ? x :y


#define MAX(x, y) \
	x > y ? x :y

//find minimum in given array
int getMin(int arr[], int n) 
{ 
    int res = arr[0]; 
	int i = 0;
    for (i = 1; i < n; i++) 
        res = MIN(res, arr[i]); 
    return res; 
} 

  
//find maximum in given array
int getMax(int arr[], int n) 
{ 
    int res = arr[0]; 

	int i = 0;
    for (i = 1; i < n; i++) 
        res = MAX(res, arr[i]); 
    return res; 
} 

