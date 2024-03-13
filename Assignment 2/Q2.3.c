#include<stdio.h>
int main(){
	int eid,dno;
	char dc;
	printf("Enter Employee ID: \n");
	scanf("%d",&eid);
	printf("Enter Department No: \n");
	scanf("%d",&dno);
	printf("Enter Designation Code: \n");
	scanf("%*c%c",&dc);
	printf("\n Employee with employee id %d is working in ",eid);
	switch (dno){
		case 10:printf("Marketing department ");
				break;
		case 20:printf("Management department ");
				break;
		case 30:printf("Sales department ");
				break;
		case 40:printf("Designing department ");
				break;
		defaulf:printf("Invalid Input ");
				break;
	}

	switch(dc){
		case 'M':printf("as Manager.\n");
				break;
		case 'S':printf("as Supervisor.\n");
				break;
		case 's':printf("as Security Officer.\n");
				break;
		case 'C':printf("as Clerk.\n");
				break;
		default :printf("Invalid Input\n");
				break;
	}

	return 0;
}
