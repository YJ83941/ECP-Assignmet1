#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two Numbers: \n");
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		for(int j=1;j<=10;j++){
			printf("%d\n",i*j);
		}
	}

	return 0;

}
