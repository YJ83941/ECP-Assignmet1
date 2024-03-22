#include<stdio.h>
int rep(char,int);
int main()
{
	int i;
	char c;
	printf("Enter a character: \n");
	scanf("%c",&c);
	printf("Enter a Number: \n");
	scanf("%d",&i);
	rep(c,i);



	return 0;
}
rep(char c,int i){
	while(i>0){
		printf("%c\n",c);
		i--;
	}
}
