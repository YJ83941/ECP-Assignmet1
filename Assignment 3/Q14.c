#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a Number: \n");
	scanf("%d",&a);
	for(int i=2;i<=a/2;i++){
		if(a==1 || a==2 || a==3)
			b=2;
		else if(a%i==0)
			b=0;
		else
			b=1;
	}

		if(b==2)
			printf("%d is a Prime\n",a);
		else if(b==0)
			printf("%d is Not a Prime \n",a);
		else
			printf("%d is a Prime\n",a);
	return 0;

}
