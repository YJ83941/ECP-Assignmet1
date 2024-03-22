#include<stdio.h>

int main()
{
	int n,cnt=5,flg=1;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	n+=1;
	while(cnt>0){
		for(int i=2;i<(n/2);i++){
			if(n%i==0){
				flg=1;
				break;
			}
			else{
				flg=0;
			}
		}
		if(flg==0){
		printf(" %d",n);
		cnt--;
		}
		n++;
	}

	return 0;

}
