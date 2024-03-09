#include<stdio.h>
 
int main(){
	int a,b,c,d;
	printf("Enter three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	d=d/3;
	printf("Average=%d \n",d);
	return 0;
}
