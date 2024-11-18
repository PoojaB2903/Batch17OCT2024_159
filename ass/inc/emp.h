#ifndef EMP_H
#define EMP_H
#define OR ||
#define BUFF 1024
 
typedef struct Employee
{
    int id;
unsigned long long  int phno;
    int sal;
    char Name[50];
    char g;
	struct Employee *next;
}EMP;
 
int getDetails(EMP *, char []);
int printDetails(EMP *);
int delNode(EMP *, int);
int searchNode(EMP *,int);
EMP* appendNode(EMP *, EMP *);
int dispMainMenu();
#endif
