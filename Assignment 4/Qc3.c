#include<stdio.h>
int cal(int, int, char);
int main(){
	int a,b,c;
//	char *ptr;
//	ptr=&c;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	printf("Enter choice: \n1.+\n2.-\n3.*\n4./\n");
	scanf("%*c%c",&c);
	printf("%d %c %d = %d\n",a,c,b,cal(a,b,c));
	
	return 0;
}

int cal(int a, int b, char c){
	switch(c){
		case '+':return (a+b);
				break;
		case '-':return (a-b);
				break;
		case '*':return (a*b);
				break;
		case '/':if(b!=0)
					return (a+b);
				else{
						printf("Zero Error\n");
						return 1;
					}
				break;
		default:printf("Invalid Entry\n");
				return 1;
				break;
	}
}
