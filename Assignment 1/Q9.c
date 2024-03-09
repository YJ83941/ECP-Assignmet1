#include<stdio.h>
int main()
{
	
	int s,t,c,f;
	printf("Select Conversion: \n 1.C --> F \n 2.F --> C\n");
	scanf("%d", &s);
	if(s==1){
		printf("Enter Temp in C\n");
		scanf("%d",&t);
		f=(t*9/5)+32;
		printf("Temp in F: %d\n",f);
	}

	else if(s==2){
		printf("Enter Temp in F\n");
		scanf("%d",&t);
		c=(t-32)*5/9;
		printf("Temp in C: %d\n",c);
	}
	return 0;
}
