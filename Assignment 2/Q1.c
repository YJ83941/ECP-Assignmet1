#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	if(b!=0){
		a=a/b;
		printf("%d\n",a);
		}
	else{
	printf("Can't divide by 0\n");
	}


	return 0;
}
