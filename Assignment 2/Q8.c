#include<stdio.h>
int main(){

	int q;
	float p;
	printf("Enter quantity: \n");
	scanf("%d",&q);
	printf(" The Total price is: ");
	if(q<30){
		printf("Rs.%d\n",q*5);
	}
	else if(q>30 && q<50){
		q=q*5;
		p=q/10;
		q=q-p;
		printf("Rs.%d\n",q);
	}
	else{
		q=q*5;
		p=q/15;
		q=q-p;
		printf("Rs.%d\n",q);
	}

	return 0;
}
