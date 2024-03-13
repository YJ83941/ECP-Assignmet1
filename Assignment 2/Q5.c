#include<stdio.h>
int main(){		
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is Greatest\n",a);
	}
	else if(b>c && b>a){
		printf("%d is Greatest\n",b);
	}
	else{
		printf("%d is Greatest\n",c);
	}
	return 0;
}
