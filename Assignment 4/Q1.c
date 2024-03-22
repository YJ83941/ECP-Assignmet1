#include<stdio.h>
int fact(int);
int main()

{
	int num;
	printf("Enter a Number: \n");
	scanf("%d",&num);
	fact(num);

	return 0;
}

int fact(int num){

	int i,res;
	i=res=1;
		while(i<=num){
			res*=i;
			i++;
		}
		printf("%d\n",res);
		return res;
}
