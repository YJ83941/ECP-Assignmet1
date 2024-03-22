#include<stdio.h>
int fb(int);
int main()
{
	int i;
	printf("Enter a number: \n");
	scanf("%d",&i);
	fb(i);

	return 0;
}
int fb(int i){
	int a,b,c;
	a=b=1;
	while(i>0){
		c=a+b;
		b=a;
		a=c;
		printf(" %d",c);
		i--;
	}
}
