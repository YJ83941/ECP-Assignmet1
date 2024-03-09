#include<stdio.h>
int main(){
	int a,b,c,d,e,i;
	printf("Enter a four digit number:\n ");
	scanf("%d",&i);
	a=i;
	b=a/1000; a=a%1000;
	c=a/100; a=a%100;
	d=a/10; a=a%10;
	e=a;

	printf(" %d\t%d\t%d\t%d\n",b,c,d,e);
	printf(" %d=%d + %d + %d + %d\n",i,b*1000,c*100,d*10,e);
	printf(" %d%d%d%d\n",e,d,c,b);

	return 0;
}
