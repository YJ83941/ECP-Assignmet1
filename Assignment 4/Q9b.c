#include<stdio.h>
int Primecheck(int, int);
int main()
{
	int i,d;
	printf("Enter two Number: \n");
	scanf("%d%d",&i,&d);
	Primecheck(i,d);

	return 0;
}

int Primecheck(int i, int j){
	int flg;
	for(int k=i;k<=j;k++){
		if(i==0 || i==1){
		//	printf("Not Prime\n");
			flg=1;
		}
		if(i==2||i==3||i==5){
			printf("%d\n",i);
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
			printf("%d\n",i);
		}
		//else
		//	printf("Not Prime");
		i++;
	}
}
