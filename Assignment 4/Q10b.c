#include<stdio.h>
int daycheck(int, int);
int main()
{
		int m,y;
		printf("Select a Month\n");
		printf("1.Jan\n2.Feb\n3.Mar\n4.Apr\n5.May\n6.Jun\n7.Jul\n8.Aug\n9.Sep\n10.Oct\n11.Nov\n12.Dec");
		scanf("%d",&m);
		printf("Enter a Year: \n");
		scanf("%d",&y);
		daycheck(m,y);



	return 0;
}
int daycheck(int m, int y){
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		printf("No of days are 31\n");	
	}
	else if(m==4 || m==6 || m==9 || m==11){
		printf("No of days are 30\n");
	}
	else if(m==2){
		if((y%4==0 && y%100!=0)||y%400==0){
			printf("No of days are 29\n");
		}
		else
			printf("No of days are 28\n");
	}
}

