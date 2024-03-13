#include<stdio.h>
int main(){
	int a,b;
	float d;
	char s;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	printf("Select an Operand:\n +\n -\n *\n / \n");
	scanf("%*c%c",&s);
	switch(s){
		case '+': printf("%d + %d = %d\n",a,b,a+b);
			break;
		case '-': printf("%d - %d = %d\n",a,b,a-b);
			break;
		case '*': printf("%d * %d = %d\n",a,b,a*b);
			break;
		case '/':if(b!=0){
				d=a/b;
				printf("%d / %d = %f\n",a,b,d);
			}
			else{
				printf("Can't Divide by 0\n");	
			}
			break;
		default: printf("Invalid Operand");
			break;
	}


	return 0;
}
