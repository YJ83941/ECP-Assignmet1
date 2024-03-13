#include<stdio.h>
int main(){
	int m,y,l;
	printf("Enter No. of Month \n");
	scanf("%d",&m);
	printf("Enter year: \n");
	scanf("%d",&y);
	if((y%4==0 && y%100!=0) || y%400==0){
		l=1;
	}
	else{
		l=0;
	}
	switch(m){
		case 1: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 2: if(l==0){
					printf("Entered Month has 28 Days in the year %d\n",y);
				}
				else{
					printf("Entered Month has 29 Days in the year %d\n",y);
				}
				break;
		case 3: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 4: printf("Entered Month has 30 Days in the year %d\n",y);
				break;
		case 5: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 6: printf("Entered Month has 30 Days in the year %d\n",y);
				break;
		case 7: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 8: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 9: printf("Entered Month has 30 Days in the year %d\n",y);
				break;
		case 10: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		case 11: printf("Entered Month has 30 Days in the year %d\n",y);
				break;
		case 12: printf("Entered Month has 31 Days in the year %d\n",y);
				break;
		default: printf("Invalid Month");
				break;

	}
	return 0;
}
