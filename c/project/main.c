#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
static int i = 0  ;
struct studentInfo
{
   char firstName[20];
   char lastName[20];
   int rollNumber;
} st[500];
 void Admin();
 void  Main();
 void AddStudent() {
		int ChoiceInAddStudent;
		printf("Enter The First Name : ");
        scanf("%s", &st[i].firstName);
		printf("Enter The Last Name : ");
        scanf("%s", &st[i].lastName);
        printf("Enter the roll number of the student : ");
        scanf("%d", &st[i].rollNumber);
        i = i + 1;
		printf("\n\n1. Back to Admin Menu\n");
		printf("2. Exit\n");
		printf("Enter Choice : ");
        scanf("%d", &ChoiceInAddStudent);
		switch(ChoiceInAddStudent) {
		case 1:
		     Admin();
		      break;
		case 2:
		     printf("\n\n\n\n                  Quitting The Programm");
		      break;

			default:
			    printf("The number input is not corret , try again");
		}

	}
void ViewStudentRecord() {
		int ChoiceInViewStudentRecord;
		printf("                       |Students Record|              \n\n");
		printf("-----------------------------------------------------------\n");
        for(int  j = 0 ; j < i ; j++) {
        printf("Number\t\t\t\tName\n\n");
        printf("%d\t\t\t\t%s %s\n\n",st[j].rollNumber,st[j].firstName,st[j].lastName);
        printf("-----------------------------------------------------------\n\n\n");

}
		printf("1. Back to Admin Menu\n");
		printf("2. Exit\n");
		printf("Enter Choice : ");
        scanf("%d", &ChoiceInViewStudentRecord);
		switch(ChoiceInViewStudentRecord) {

		case 1:
		    Admin();
		     break;
		case 2:
		    printf("\n\n\n\n                  Quitting The Programm");
            break;

			default:
            printf("The number input is not corret , try again");
		}
	}
void DeleteStudent(){
    int temp;
    int choiceInDelete;

   printf("Enter the roll number of the student : ");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == st[j].rollNumber)
      {
         for (int k = j; k < 499; k++)
         {
            st[k] = st[k + 1];
         }
         i--;
      }
   }
printf("The entered student's record deleted successfully\n\n");
printf("1. Back to Admin Menu\n");
printf("2. Exit\n");
printf("2. Enter Choice : ");
scanf("%d", &choiceInDelete);
    switch(choiceInDelete) {

    		case 1:
             Admin();
    		 break;
    		case 2:
            printf("\n\n\n\n                  Quitting The Programm");
             break;

            default:
                printf("The number input is not corret , try again");
    		}
    	}
 void UpdateStudent() {
   int ChoiceInUpdate;
   int temp;
   printf("Enter the roll number of the student : ");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
      if (temp == st[j].rollNumber)
      {
         printf("\n\n1. First Name\n"
                "2. Last Name\n"
                "3. Roll Number\n"
               );
         int c;
         scanf("%d", &c);
         switch(c) {
            case 1:
               printf("Enter the updated first name : ");
               scanf("%s", st[j].firstName);
               break;
            case 2:
               printf("Enter the updated last name : ");
               scanf("%s", st[j].lastName);
               break;
            case 3:
               printf("Enter the updated roll number : ");
               scanf("%d", st[j].rollNumber);
               break;
               default:
    		    printf("The number input is not corret , try again");
   }

         printf("Records updated successfully\n\n");
    	printf("1. Back to Admin Menu\n");
    		printf("2. Exit\n");
    		printf("Enter Choice : ");
    		scanf("%d", &ChoiceInUpdate);
    		switch(ChoiceInUpdate) {
    		case 1:
    		    Admin();
    		     break;
    		case 2:
    		    printf("\n\n\n\n                  Quitting The Programm");
    		     break;

    		default:
    		    printf("The number input is not corret , try again");
    		}}}}
 void Admin() {
		int ChoiceInAdmin;
		printf("| Loged In as Admin |\n\n");
		printf("1. Add Student Record\n");
		printf("2. View All Student Records\n");
		printf("3. Update Student Record\n");
		printf("4. Delete Student Record\n");
		printf("5. Main Menu\n");
		printf("6. Exit\n\n");
		printf("Enter Choice : ");
        scanf("%d", &ChoiceInAdmin);
		switch(ChoiceInAdmin) {
		case 1:
		    AddStudent();
		      break;
		case 2:
		    ViewStudentRecord();
		      break;
		case 3:
		    UpdateStudent();
		     break;
		case 4:
		    DeleteStudent();
		    break;
		case 5:
		     Admin();
		     break;
		case 6:
		     printf("\n\n\n\n                  Quitting The Programm");
		      break;
			default:
				printf("The number input is not corret , try again");
		}}
 void Student() {
		int ChoiceInStudent;
		printf("     |Students Log In|\n\n\n\n");
		printf("      Welcome as Student\n\n\n\n\n");
		printf("1. Back to Main Menu\n");
		printf("2. Exit\n");
		printf("Enter Choice : ");
        scanf("%d", &ChoiceInStudent);
		switch(ChoiceInStudent) {
		case 1:
		     Main();
		 break;
		case 2:
        printf("\n\n\n\n                  Quitting The Programm");
         break;
        default:
        printf("The number input is not corret , try again");
}}
 void Main() {
		int FirstChoice;
		printf("Log As : \n\n");
		printf("1. Admin\n");
		printf("2. Student\n");
		printf("3. Exit\n\n");
		printf("Enter Your Choice : ");
        scanf("%d", &FirstChoice);
		switch(FirstChoice) {
		case 1:
		    Admin();
			break;
		case 2:
            Student();
            break;
		case 3:
		    printf("\n\n\n\n                  Quitting The Programm");
		     break;
		default:
		    printf("The number input is not corret , try again");
		}}
int main(){
    int FirstChoice;
		printf("Log As : \n\n");
		printf("1. Admin\n");
		printf("2. Student\n");
		printf("3. Exit\n\n");
		printf("Enter Your Choice : ");
        scanf("%d", &FirstChoice);
		switch(FirstChoice) {
		case 1: Admin();
			break;
		case 2:
		    Student();
		       break;
		case 3:
		 printf("\n\n\n\n                  Quitting The Programm");
			break;
			default:
			printf("The number input is not corret , try again");
		}
    return 0;
}
