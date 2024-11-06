#include <stdio.h>
#include <stdlib.h>

#include <CUnit.h> // CU_ASSERT

#include <min_max.h>


void Mytestfunction_min(void)
{
	int arr[]={10,90,7,8};
	int min = getMin(arr, 4);

	CU_ASSERT(min == 7)
	printf("\n min:%d", min);

}


