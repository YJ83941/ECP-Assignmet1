#include<stdio.h>

int main()
{
	int a,b=1;
	for(a=2;a<100;a++)
	{
		for(int i=2;i<=a/2;++i){
			//if(a==1 || a==2 || a==3)
			//	b=1;
			 if(a%i==0)
				b=0;
			else
				b=1;
		}
		if(b==1)
			printf("%d\n",a);
	}

		if(b==1)
			printf("%d\n",a);
	return 0;

}
