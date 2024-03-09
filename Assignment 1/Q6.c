#include<stdio.h>

int main()
{
		int a,p;
		printf("Enter a No: \n");
		scanf("%d",&a);
		for(int i=1;i<=10;i++){
			p=a*i;
			printf("%d x %d = %d \n",a, i, p);
		}

	return 0;
}
