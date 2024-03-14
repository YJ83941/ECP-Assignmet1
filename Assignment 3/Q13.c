#include<stdio.h>

int main()
{
	int a=0,b=1,c,d;
	printf("Enter a Number: \n");
	scanf("%d",&d);
	for(int i=0;i<d;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	printf("\n");

	return 0;

}
