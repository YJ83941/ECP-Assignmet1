#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number\n");
	scanf("%d \n",&a);
	if(a%2==0){
		printf("%d is even no. \n",a);
	}
	else{
		printf("%d is odd no.\n",a);
	}

	return 0;
}
