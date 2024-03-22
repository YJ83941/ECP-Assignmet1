#include<stdio.h>
int cal(int,int,int);

int main()
{
	int a,b,c;
	printf("Enter two Numbers: \n");
	scanf("%d%d",&a,&b);
	printf("Select an Operator:\n1. +\n2. -\n3. *\n4. /\n");
	scanf("%d",&c);
	cal(a,b,c);

	return 0;
}

int cal(int a , int b, int c){
	switch(c){
		case 1: printf("%d + %d = %d\n",a,b,a+b);
				break;
		case 2: printf("%d - %d = %d\n",a,b,a-b);
				break;
		case 3: printf("%d * %d = %d\n",a,b,a*b);
				break;
		case 4:	if(b!=0)
					printf("%d / %d = %d\n",a,b,a/b);
				else
					printf("Divide by zero error\n");
				break;
		default: printf("Invalid Choice\n");
				break;
	}

}
