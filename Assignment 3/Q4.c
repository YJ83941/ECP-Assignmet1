#include<stdio.h>

int main()
{
	int i,j,t;
	j=t=1;
	printf("Enter a No.: \n");
	scanf("%d",&i);
	while(j<=i){
		t*=j;
		j++;


	}
	printf("%d\n",t);

	return 0;

}
