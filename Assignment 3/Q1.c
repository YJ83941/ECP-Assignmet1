#include<stdio.h>

int main()
{
	int n,i=0;
	char x;
	printf("Enter a Character: \n");
	scanf("%c",&x);
	printf("Enter a Number: \n");
	scanf("%d",&n);
	while(i<n){
		printf("%c",x);
		i++;
	}

	return 0;

}
