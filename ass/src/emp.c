 #include<common.h>
 #include <emp.h>
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
 		e=e->next;
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

int delNode(EMP *head, int key)
{
	int flag = 1;

	EMP *temp = head;

	printf("\n Deleting the node");
	while(head!=NULL)
	{
		if(head->id == key)
		{
			//found
			flag = 0;
			break;
		}
		temp = head;
		head = head->next;
	}	

	if(flag == 0)
	{
		
		temp->next = head->next;
	}

	return flag;


}

int searchNode(EMP *head,int key)
{
	int flag =1;

	EMP *temp=head;
	while(head != NULL)
	{
		if(head->id ==key)
		{
			flag=0;
			break;
		}
		head=head->next;
	}
	if(flag==0)
		printf("\n %d found at address %p ", key, head);
	return flag;
}





int dispMainMenu()
{
	int ch;
	printf("\nPress,");
	printf("\n1. Delete Record");
	printf("\n2. Print Records");
	printf("\n3. Search Record");
	printf("\n4. Exit");
	printf("\nChoice: ");
	scanf("%d",&ch);

	return ch;
}
