#include<stdio.h>

int main()
{
	int i,j=1;
	printf("Enter a Number: \n");
	scanf("%d",&i);
	while(j<i){
		if(i%j==0){
			printf("%d, ",j);
		}
		j++;
	}
	printf("\n");
	return 0;

}
