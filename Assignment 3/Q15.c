#include<stdio.h>
int main(){
	int a,b,s;
	float d;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	printf("Select an Operation:\n 0.Exit\n 1. +\n 2. -\n 3. *\n 4. / \n");
	scanf("%d",&s);
	do{
		switch(s){
			case 1: printf("%d + %d = %d\n",a,b,a+b);
				break;
			case 2: printf("%d - %d = %d\n",a,b,a-b);
				break;
			case 3: printf("%d * %d = %d\n",a,b,a*b);
				break;
			case 4:if(b!=0){
						d=a/b;
						printf("%d / %d = %f\n",a,b,d);
					}		
					else{
						printf("Can't Divide by 0\n");	
					}
				break;
			case 0:printf("EXITED");
				break;
			default: printf("Invalid Operand\n");
				break;
		}
	}while(s!=0);

	return 0;
}
