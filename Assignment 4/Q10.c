#include<stdio.h>
int leapcheck(int);
int main()
{
	int i;
	printf("Enter a Year: \n");
	scanf("%d",&i);
	leapcheck(i);



	return 0;
}

int leapcheck(int i){

	if((i%4==0 && i%100!=0)||i%400==0){
		printf("Leap Year\n");
	}
	else
		printf("Not Leap Year\n");
}
