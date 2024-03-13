#include<stdio.h>
int main(){
	char c;	
	printf("Enter a Character: \n");
	scanf("%c",&c);
	if((c>=65)&&(c<=122)){
		printf("Entered character %c is a Alphabet\n",c);
		if(c<=90){
			printf("Entered character %c is Upper case\n",c);
		}
		else{
			printf("Entered character %c is lower case\n",c);
		}
	}
	else if((c>=48) &&(c<=57)){
		printf("Entered character %c is a Digit\n",c);
	}
	else if(c== 32 || c==9 || c==13 || c==10){

		printf("Entered character %c is a Space\n",c);
	}
	else{
		
		printf("Entered character %c is Other\n",c);
	}

	return 0;
}
