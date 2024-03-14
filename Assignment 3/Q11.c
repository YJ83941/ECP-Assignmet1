#include<stdio.h>

int main()
{
	int i,j,t;
	t=1;
	printf("Enter a No.: \n");
	scanf("%d",&i);
	for(j=1;j<=i;j++){
		t*=j;
	}
	printf("%d\n",t);
	return 0;

}
