#include<stdio.h>
int powr(int,int);
int main()
{
	int a,b;
	printf("Enter a Number: \n");
	scanf("%d",&a);
	printf("Enter a Power\n");
	scanf("%d",&b);
	powr(a,b);
	


	return 0;
}

int powr(int a, int b){
	int i=a;
	while(b>1){
		a=a*i;
		b--;
	}
	
	printf("%d\n",a);
}
