#include<stdio.h>
int main(){
	int y,m;
	printf("Enter a year: \n");
	scanf("%d",&y);
	printf("Select a month: \n");
	printf("1. Jan\n 2.Feb\n 3.Mar\n 4.Apr\n 5.May\n 6.Jun\n 7.Jul\n 8.Aug\n 9.Sep\n 10.Oct\n 11Nov\n 12.Dec\n");
	scanf("%d",&m);
	switch(m){
		case 1: printf("Selected month has 31  days in the year %d",y);
				break;
		case 2: if((y%4==0 && y%100!=0)||y%400==0){
				printf("Selected month has 29  days in the year %d",y);
				break;
				}
				else{	
				printf("Selected month has 28  days in the year %d",y);
				}
				break;
		case 3: printf("Selected month has 31  days in the year %d",y);
				break;
		case 4: printf("Selected month has 30  days in the year %d",y);
				break;
		case 5: printf("Selected month has 31  days in the year %d",y);
				break;
		case 6: printf("Selected month has 30  days in the year %d",y);
				break;
		case 7: printf("Selected month has 31  days in the year %d",y);
				break;
		case 8: printf("Selected month has 31  days in the year %d",y);
				break;
		case 9: printf("Selected month has 30  days in the year %d",y);
				break;
		case 10: printf("Selected month has 31  days in the year %d",y);
				break;
		case 11: printf("Selected month has 30  days in the year %d",y);
				break;
		case 12: printf("Selected month has 31  days in the year %d",y);
				break;
	}
	
	return 0;
}
