#include<stdio.h>

int main()
{
	int n,r,sum=0,temp,cnt=0;        
//	scanf("%d",&n);
	for(n=1;n<500;n++){
		temp=n;    
		while(temp!=0){
			temp/=10;
			cnt++;
		}
		temp=n;
		while(temp>0)    
		{    
			r=temp%10;
			while(cnt!=0){
				r*=r;
				cnt--;
			}
			sum=sum+r;    
			temp=temp/10;    
		}    
		if(n==sum) {   
			printf("%d\n ",n);        
		}
	}
	return 0;

}
