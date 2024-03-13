#include<stdio.h>

int main()
{
	int num,rem,temp,tem2,sum,rev,arm;
	printf("Enter a Number \n");
	scanf("%d",&num);
	tem2=num;
	temp=num;
	while(temp != 0 )
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}
	printf("Sum = %d \n",sum);
	temp=tem2;

	while( num != 0  )
	{
		rem = num % 10;
		rev = rev * 10 + rem ;
		num = num / 10;
	}
	printf("Reverse = %d \n",rev);
	if(temp == rev )
	{
		printf("Palindrome  \n");
	}
	else
	{
		printf("Not palindrome \n");
	}
	num=tem2;
	temp=tem2;

	while(temp != 0)
	{
		rem = temp % 10;
		arm = arm + (rem * rem * rem );
		temp /= 10;
	}
	if(arm == num)
		printf("Armstrong : %d == %d \n",num,arm);
	else
	  	printf("Not Armstrong \n");
	return 0;

}
