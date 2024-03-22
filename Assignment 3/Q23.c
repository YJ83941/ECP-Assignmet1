#include<stdio.h>
int pascal(int int);
int fact(int);
int main()
{
	for(int i=0;i<5;i++){
		for(int j=4;j>i;j++){
			printf("  ");
		}
		for(int n=1;n<=i;n++){
			printf(" %d",pascal(i,n));
		}
		printf("\n");

	}

	return 0;

}

int pascal(int i, int n){
	int k=fact(i);
	int l=fact(n);
	int m=fact(i-n);
	int sum = k/l*m;
	return sum;


}

int fact(int t){
	int t,z,t;
	j=y=z;
	while(z<=t){
		y*=z;
		z++;


	}
	return y;
}
