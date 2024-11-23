#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>
#include <string.h>

struct Phone
{
   char pno[20],fname[20],lname[20],mail[40];
   struct Phone *next;

};

  struct Phone *f,*l,*c,*b,*a,*t;

  void addPhone()
  {
       c=(struct Phone *)malloc(sizeof(struct Phone));
       printf("\nEnter Phone Number  ");
       scanf("%s",&c->pno);
       printf("Enter First Name        ");
       scanf("%s",&c->fname);
       printf("Enter Last Name         ");
       scanf("%s",&c->lname);
       printf("Enter Mail Id           ");
       scanf("%s",&c->mail);

       if(f==NULL)
	   f=l=c;
       else
       {
	  l->next = c;
	  l=c;
       }
       l->next = NULL;

  }
  void dispPhone()
  {
     if(f==NULL)
	printf("\n Phone Diary is Empty  ");
     else
     {
	for(b=f; b ; b=b->next)
	{
	   for(a=b->next; a ; a=a->next)
	   {
	       if( strcmp(b->fname,a->fname)>0)
	       {
		     strcpy(t->pno,b->pno);
		     strcpy(t->fname,b->fname);
		     strcpy(t->lname,b->lname);
		     strcpy(t->mail,b->mail);


		     strcpy(b->pno,a->pno);
		     strcpy(b->fname,a->fname);
		     strcpy(b->lname,a->lname);
		     strcpy(b->mail,a->mail);

		     strcpy(a->pno,t->pno);
		     strcpy(a->fname,t->fname);
		     strcpy(a->lname,t->lname);
		     strcpy(a->mail,t->mail);

		}
	     }
	 }
      }

       for(c=f; c ; c=c->next)
	 printf("\n %s\t %s \t %s \t %s  ",c->pno,c->fname,c->lname,c->mail);

  }

void main()
{
  int ch;
   do
   {
     clrscr();
     printf("\n[1]. Add  ");
     printf("\n[2]. Search ");
     printf("\n[3]. Updation ");
     printf("\n[4]. Deletion  ");
     printf("\n[5]. Display All  ");
     printf("\n[6]. Exit ");
     printf("\n\n Enter Your Choice.....   ");
     scanf("%d",&ch);

	 switch(ch)
	 {
	     case 1 :
			addPhone();
			break;
	     case 2 :
			printf("\n Search  ");
			break;
	     case 3 :
			printf("\n update  ");
			break;
	     case 4 :
			printf("\n Delete  ");
			break;
	     case 5 :
			dispPhone();
			break;
	     case 6 :
			clrscr();
			gotoxy(30,12);
			printf("Thank You ");
			exit(0);


	 }
	 getch();


   }while(1);
   getch();
}



