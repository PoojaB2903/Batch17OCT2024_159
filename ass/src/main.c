/*********************  This is dynamically allocating memory and reading records dynamically  
  using single linked list **********************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFF 1024
#define OR ||
typedef struct Employee
{
    int id;
unsigned long long  phno;
    int sal;
    char Name[50];
    char g;
    struct Employee *next;
}EMP;
int getDetails(EMP *,char []);
int printDetails(EMP *);
EMP *appendNode(EMP *,EMP *);
int main(int argc,char *argv[])
{
    int i;
    EMP *e=NULL;
    EMP *nn=NULL;
    EMP *temp=NULL;
    EMP *head=NULL;
    FILE *fp=NULL;
    char lines[BUFF];
    char fileName[BUFF];
    if(argc>2 OR argc<2)
    {
        perror("\n File is missing\n:");
    }
    strcpy(fileName,argv[1]);
    fp=fopen(fileName,"r");
    printf("\n Yes");
    if(fp == NULL)
    {
        perror("fopen: ");
        return 1;
    }
    printf("\n File open successfully");
//  e = (EMP *)malloc(3*sizeof(EMP));
//  temp = e;

    while((fgets(lines,BUFF,fp))!=NULL)
    {
        lines[strlen(lines)-1]='\0';
        nn=(EMP *)malloc(sizeof(EMP));
        nn->next=NULL;
        getDetails(nn,lines);
        head=appendNode(head,nn);
    }
//  e = temp;

    system("clear");

        printDetails(head);


    printf("\n\n");
    return 0;
}
int getDetails(EMP *e, char line[])
 {
         char *token = NULL;
         token = strtok(line,",");
         if(token != NULL)
         {
                 e->id = atoi(token);
                 token = strtok(NULL,",");
                 strcpy(e->Name,token);
                 token = strtok(NULL,",");
                 e->g = *token;
                 token = strtok(NULL,",");
                 e->phno = atol(token);
                 token = strtok(NULL,",");
                 e->sal = atoi(token);
                 return 0;
         }
         return 1;
 }
 int printDetails(EMP *e)
 {
     if(e == NULL)
    {
        //the list is empty
        printf("\nList is Empty\n");
        return 0;
    }
    while(e!= NULL)
    {
         printf("\n==========Employee Details are==========\n");
         printf("\nID: %d",e->id);
        printf("\nName: %s",e->Name);
         printf("\nGender: %c",e->g);
         printf("\nPhNo: %lld",e->phno);
        printf("\nSalary: %d",e->sal);
         printf("\n========================================\n");
         printf("\n\n");
         e = e->next;
 }
 }
EMP *appendNode(EMP *head,EMP *nn)
{
    // printf("\nIn appendNode\n");
    EMP *temp = head;

    if(head == NULL)
    {
        //the list is empty
        printf("\nList is Empty\n");
        head = nn;
        temp = nn;
    }
    else
    {
        // printf("\nList is not empty\n");
        while(head->next!= NULL)
        {
            // printf("%d->",head->val);
            head = head->next;
        }

        head->next = nn; //adding node to the end of the list
        }
    head = temp; //head is again pointed to the BA

    return head;
}
                                                         
