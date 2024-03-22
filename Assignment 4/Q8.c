#include<stdio.h>
int fb();
int main()
{
	fb();
	return 0;
}
int fb(){

	int i,a,b,c;
	a=b=1;
	strt:
	printf("Press 1 to Run\n");
	scanf("%d",&i);
	c=a+b;
	printf("%d\n",c);
	b=a;
	a=c;
	goto strt;
}
