#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter base & index Number: \n");
	scanf("%d%d",&a,&b);
	c=a;
	for(int i=1;i<b;i++){
		a=a*c;
	}
	printf("%d\n",a);

	return 0;

}
