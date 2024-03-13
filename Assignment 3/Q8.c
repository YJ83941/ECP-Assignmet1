#include<stdio.h>

int main()
{
	int a,b,c=1;
	printf("Enter two Number: \n");
	scanf("%d%d",&a,&b);
	while(c>0){
		c=a%b;
		if(c==0){
			printf("GCD is %d\n",b);
			continue;
		}
		printf("%d  %d = %d\n",a,b,c);
		a=b;
		b=c;
	}

	return 0;

}
