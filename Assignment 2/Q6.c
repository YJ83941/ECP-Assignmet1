#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter a five digit number: \n");
	scanf("%d",&a);
	d=a;
	while(a != 0){

		b=a%10;
		c=c*10+b;
		a=a/10;

	}
	printf("Reverse = %d\n",c);
	if(d == c){
		printf("Palindrome \n");
	}
	else{
		printf("Not palindrome\n");
	}
	return 0;
}
