#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d",&a);
	if(a>0){
		printf("Number %d is Positive \n",a);
	}
	else if(a<0){
		printf("Number %d is Negative \n",a);
	}
	else{
	printf("Number is Zero\n");
	}
	return 0;
}
