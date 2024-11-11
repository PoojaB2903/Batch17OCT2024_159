/****************************************************************************************
WAP to which should have the following functionalities
1. scan employee recs 
2. display
3. search for a particulary employee based on
  a. id
  b. lName
4. search for employess whos salary fall in
   between 6-10K and display only those records
 
5. update employee rec to change his/her lName
**************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i;
struct Employee 
{
 	int eId;
	float eSal;
/*	char eName[20]; */
	char eAddress[30];
	char eGender;
	char fName[20];
	char lName[20];
	char eTitle[10];
};
typedef struct Employee EMP;

void getEmpDetails(EMP [],int);
void dispEmpDetails(EMP [],int);
void searchEmp(EMP [],int);
void updateEmp(EMP [],int);
void searchId(EMP [],int);
void searchName(EMP [],int);
void searchSal(EMP [],int);
void dispDetails(EMP [],int);
int main()
{
	EMP e[5];
	int n=3;
    int k;
	while(1){
	printf("\n==========================");
	printf("\n 1. Enter Employee Details");
	printf("\n 2. Display all Employee Details");
	printf("\n 3. Search");
	printf("\n 4. Update LastName");
	printf("\n 5. EXIT");
	printf("\n=========================");
	scanf("%d",&k);
	switch(k)
	{

	case 1:  getEmpDetails(e,n);
			break;
	case 2:  dispEmpDetails(e,n);
			break;
	case 3: searchEmp(e,n);
			break;
	case 4:  updateEmp(e,n);
			break;
	case 5: exit(0);
			break;
	default: printf("\nEnter valid number");
}
	}
	return 0;
}

void getEmpDetails(EMP e[],int n)
{
   printf("\n\n Enter Employee Details");
   for(i=0;i<n;i++)
   {
    printf("\nEnter Id:");
	scanf("%d",&e[i].eId);

    printf("\nEnter fName:");
	scanf("%s",e[i].fName);
  
    printf("\nEnter lName:");
	scanf("%s",e[i].lName);
    printf("\nEnter Title:");
	scanf("%s",e[i].eTitle);
	scanf(" ");
    printf("\nEnter Gender:");
	scanf("%c",&e[i].eGender);
  
    printf("\nEnter Salary:");
	scanf("%f",&e[i].eSal);
  
    printf("\nEnter Address:");
	scanf("%s",e[i].eAddress);
  }

}

void dispEmpDetails(EMP e[],int n)
{
  for(i=0;i<n;i++)
  {
    printf("\n=============================");
	printf("\nEmployee Id: %d",e[i].eId);
	printf("\nEmployee Name: %s%s",e[i].fName,e[i].lName);
	printf("\nEmployee Gender: %c",e[i].eGender);
	printf("\nEmployee Salary: %f",e[i].eSal);
	printf("\nEmployee Id: %s",e[i].eAddress);
    printf("\n=============================");
 }
}

void searchEmp(EMP e[],int n)
{
	int k;
	printf("\n==========================");
	printf("\n 1. Search by Id");
	printf("\n 2. Search by Name");
	printf("\n 3. Search by Salary");
	printf("\n=========================");
	scanf("%d",&k);
	switch(k)
	{

	case 1: searchId(e,n);
			break;
	case 2: searchName(e,n);
			break;
	case 3: searchSal(e,n);
			break;
	default: printf("\nEnter valid number");
			break;
	}
}
void updateEmp(EMP e[],int n)
{
 	char lna[20];
	int id;
	printf("\n  Enter Employee Id:");
	scanf("%d", &id);
	printf("\n Enter last name to update");
	scanf("%s", lna);
	for(i=0;i<n;i++)
	{
		if(e[i].eId==id)
			strcpy(e[i].lName,lna);
	}
}

void searchId(EMP e[],int n)
{
	int ser,f=0;
	printf("\n Enter value for search:");
	scanf("%d", &ser);
	printf("\n ser:%d",ser);
	for(i=0;i<n;i++)
	{
		if(ser == e[i].eId)
		 {
		 dispDetails(e,i);
			f=1;
	     }
	}
	if(f==0)
		printf("\n\n Not Found!!!\n");
}
void searchName(EMP e[],int n)
{
	char ser[20],f=0;
	printf("\n Enter value for search:");
	scanf("%s",ser);
	printf("\n ser:%s",ser);
	 for(i=0;i<n;i++)
     {
         if(ser== e[i].fName|| ser==e[i].lName)
          {
          dispDetails(e,i);
            f=1;
          }
     }
     if(f==0)
         printf("\n\n Not Found!!!\n");
 }


void searchSal(EMP e[],int n)
{
	int f=0;
	 for(i=0;i<n;i++)
     {
         if( e[i].eSal<=10000 && e[i].eSal>=6000);
          {
          dispDetails(e,i);
            f=1;
          }
     }
     if(f==0)
         printf("\n\n Not Found!!!\n");

}
void dispDetails(EMP e[],int i)
{
	
    printf("\n=============================");
	printf("\nEmployee Id: %d",e[i].eId);
	printf("\nEmployee Name: %s%s",e[i].fName,e[i].lName);
	printf("\nEmployee Gender: %c",e[i].eGender);
	printf("\nEmployee Salary: %f",e[i].eSal);
	printf("\nEmployee Id: %s",e[i].eAddress);
    printf("\n=============================");
}
