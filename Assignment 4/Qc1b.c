#include<stdio.h>
//int sp(int, int);
int sres, pres;
int main()
{
	int a,b;
//	int *ptra,*ptrb;
//	ptra=&a;
//	ptrb=&b;
	printf("Enter two Numbers: \n");
	scanf("%d%d",&a,&b);
	sp(&a,&b);
	printf("Sum=%d \nProduct=%d\n",a,b);
	return 0;
}

int sp(int* ptra, int* ptrb){
	int temp=*ptra;
	*ptra=*ptra+*ptrb;
	*ptrb= temp * (*ptrb);
}
