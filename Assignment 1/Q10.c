#include<stdio.h>
#include<math.io>

int main(){
	int a,b,c,peri,s,area;
	printf("Enter 3 sieds of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	peri=a+b+c;
	s=peri/2;
	area=sqrt(s*(s-a)*-(s-b)*(s-c));
	printf("Perimeter = %d \n Area=%d\n",peri,area);

	return 0
}
