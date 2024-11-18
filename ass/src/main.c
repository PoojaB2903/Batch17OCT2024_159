#include<emp.h>
#include<common.h>
int main(int argc,char *argv[] )
{
	EMP *nn=NULL;
	int flag=0;
	int key=0;
	EMP *e=NULL;
	EMP *temp = NULL;
	EMP *head = NULL;
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
	 while((fgets(lines,BUFF,fp))!=NULL)
    {
        lines[strlen(lines)-1]='\0';
        nn=(EMP *)malloc(sizeof(EMP));
        nn->next=NULL;
        getDetails(nn,lines);
        head=appendNode(head,nn);
    }
	
	while(1)
	{
		switch(dispMainMenu())
		{
			case 1:
					printf("\nEnter the key of the node: ");
					scanf("%d",&key);
					delNode(head,key);
					break;
			case 2:
					printDetails(head);
					break;
			case 3: 
					printf("\n Enter key to search: ");
					scanf("%d",&key);
					searchNode(head,key);
					break;
			case 4:
					flag = 1;
					break;
			default:
					printf("\nEnter the correct Choice");
					break;
		}
		if(flag == 1)
			break;
	}
	
	printf("\n\n");

	return 0;

}
