#include <stdio.h>
#include <conio.h>
#include <process.h>
#include "box.h"

void rev()
{
   textcolor(BLACK);
   textbackground(WHITE);

}

void norm()
{
   textcolor(WHITE);
   textbackground(BLACK);
}
void main()
{
   char st[5][40]={
			"ADDITION",
			"SUBTRACTION",
			"MULTIPLACTION",
			"DIVISION",
			"EXIT"
		  };
   int i,opt=1;
   char ch;
do
{
   do
   {
   clrscr();

       gotoxy(29,7);
       printf("M A I N   M E N U ");

       box(28,8,45,19);
       for(i=0;i<5;i++)
       {
	  if(i==opt-1)
	     rev();
	  else
	    norm();
	  gotoxy(30,10+i*2);
	  cprintf("%s",st[i]);
       }
       _setcursortype(_NOCURSOR);


	 ch=getch();
	 if(ch==0)
	 ch=getch();

	 switch(ch)
	 {
	     case 72:
		   opt--;
		   if(opt<=0)
		     opt=5;
		   break;
	     case 80:
		  opt++;
		  if(opt>5)
		    opt=1;
		  break;
	 }
	 norm();
      }while(ch!=13);
      _setcursortype(_NORMALCURSOR);

	clrscr();
	switch(opt)
	{
	    case 1:
		gotoxy(30,12);
		printf("Addition  ");
		break;
	    case 2:
		gotoxy(30,12);
		printf("Subtraction  ");
		break;
	    case 3:
		gotoxy(30,12);
		printf("Multiplaction  ");
		break;
	     case 4 :
		gotoxy(30,12);
		printf("Division   ");
		break;
	     case 5 :
			clrscr();
			gotoxy(30,12);
			printf("Thank You ");
			getch();
			exit(0);


	}

       getch();
    }while(1);

}