#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stdf [][100] stdl[][100];
int stdnum=1;


void main(){
	menu();

}
void menu(){
	int scl;
printf("login as: \n\n");
printf("1.Admin\n");
printf("2.Student\n");
printf("3.Exit\n\n");
printf("Enter your choice: ");
scanf("%d" , &scl);
switch (scl)
{
case 1 : system ("cls");
admin();
break;
case 2 : system ("cls");
student();
break;
case 3 : system ("cls");
printf("Quitting the program")
exit(1);
break;
default:
	system ("cls");
	menu();
}
}

void admin(){
	int sc2;
printf("login as admin: \n\n");
printf("1.Add student record\n");
printf("2.View all student Record\n");
printf("3.Update student Record\n");
printf("4.Delete student Record\n ");
printf("5.Main Menu\n ");
printf("6.exit \n\n");
printf("Enter your choice: ");
scanf("%d" , &sc2);
switch(sc2)
case 1: system ("cls");
add();
break;
	case 2: system ("cls");
view();
	break;
		case 3: system ("cls");
update();
	break;
		case 4: system ("cls");
deletestd();
	break;
		case 5: system ("cls");
menu();
	break;
		case 6: system ("cls");
exit(1);
	break;
}

void add()(
printf("Enter The first name: ");
scanf ("%s" , stdf[stdnum]);
printf ("Enter The last name: ");
scanf ("%s" , stdl[stdnum++]);
system("cls");
admin();
}
void view(){
int number=1 , i , sc4;
printf("|Student Record|\n\n");
printf("number       name\n ");
for(i+1 ; i<stdnum ; i++){
	printf("%d      %s %s\n" , number++ ,stdf[i] , stdl[i] );



}
printf("\n\n 1.Back to Admin\n 2.Exit\n\n Enter your choice: ");
scanf("%d" , &sc4);
switch(sc4)
case 1: system ("cls");
admin();
	break;
	case 2: system ("cls");
exit(1);
	break;
	default:
		system ("cls");
view();
	break;


void update()(
int num ;
printf("Enter The number of the student: ");
scanf ("%d" , &num );
printf ("Enter The new first name: ");
scanf ("%s" , stdf[num]);
printf ("Enter The new last name: ");
scanf ("%s" , stdl[num]);
system("cls");
admin();

void deletrstd(){

int stdde , i;
printf("Enter Student Number:  ");
scanf("%d" , &stdde);
for(i= stdde ; i<stdnum-1 ; i++){
strcpy(stdf[i], stdf[i+1]);
strcpy(stdl[i], stdl[i+1]);
}
stdnum--;
system("cls");
admin();
}

void student(){
	system("cls");
	int e;
	printf("|Student Page|\n\n\nvWelcome as student \n\n\n\n\n 1.Back to Main Menu\n 2.Exit \n Enter choice : ");
	scanf("%d" , &e);
	switch(e){
		case 1 : main menu();
		break;
		case 2 : exit;
		break;
	}

}
