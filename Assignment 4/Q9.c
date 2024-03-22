#include<stdio.h>
int Primecheck(int);
int main()
{
	int i;
	printf("Enter a Number: \n");
	scanf("%d",&i);
	Primecheck(i);

	return 0;
}

int Primecheck(int i){
	int flg;
	if(i==0 || i==1){
		printf("Not Prime\n");
		flg=1;
	}
	for(int j=2;j<i/2;j++){
		if(i%j==0){
			flg=1;
			break;
		}
		else{
			flg=0;
		}
	}
	if(flg==0){
		printf("Prime\n");
	}
	else("Not Prime");
}
