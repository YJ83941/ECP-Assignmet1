#include<stdio.h>

int main(){
	int y,a=1,b,c;
	printf("Enter a year: \n");
	scanf("%d",&y);
	printf("Using Conditional Statement:\n");
	if(y%4 ==0){
		if(y%100 != 0){
			printf("Leap year\n");
			a=0;
		}
	}
	else if(y%400 ==0){
		printf("Leap year\n");
	}
	else{
		printf("Non-Leap Year\n");
	}
	//------------------------------------------------
	printf("--------------------------------\n");
	printf("Using Logical Operators:\n");
	if((y%4 ==0 && y%100!=0) || y%400==0){
		printf("Leap Year \n");
		a=0;
	}
	else{
		printf("Non-Leap Year\n");
		//a=1;
	}

	printf("\n Number of days in the Year:");
	if(a==0){
		printf("366\n");
	}
	else{
		printf("365\n");
	}


	return 0;
}
