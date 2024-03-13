#include<stdio.h>

int main()
{
	int i,j=1;
	printf("Enter a Number: \n");
	scanf("%d",&i);
	while(j<11){
		printf("%d x %d = %d\n",i,j,i*j);
		j++;

	}

	return 0;

}
