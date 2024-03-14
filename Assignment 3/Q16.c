#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t t;
	srand((unsigned) time(&t));
	int a,r=0,c,w=0;

	start:
	printf("\n-----Guess The Magic Number-----\n\n");
	printf("You have 10 Guesses \n");
	printf("Guess the number between 1 - 1000: \n");
	a = rand() % (1000 + 1);
	do{
		//printf("%d\n",a);
		scanf("%d",&c);
		if(c>a){
			printf("<---LEFT\n");
		}
		else if(a>c){
			printf("RIGHT--->\n");
		}
		else{
			printf("\tYou Guessed Right!\n");
			printf("Magic Number:%d \t Your Number:%d\n",a,c);
			printf("You Needed %d Guesses\n",r);
			w=1;
			break;
		}
		r++;
		printf("\t\tGuesses Remaining: %d\n",10-r);

	}while(r<=10);
	if(w!=1){
		printf("YOU LOST\n");
		printf("MAGIC Number was: %d",a);
	}
	printf("--------------------------------\n\n");
	return 0;

}
