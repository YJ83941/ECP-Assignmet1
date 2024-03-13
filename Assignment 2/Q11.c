#include<stdio.h>
int main(){
		int x,y;
		printf("Enter two points: \n");
		scanf("%d%d",&x,&y);
		if(x>0 && y>0){
			printf("The point lies in the FIRST QUADRANT \n");
		}
		else if(x<0 && y>0){
			printf("The point lies in the SECOND QUADRANT \n");
		}

		else if(x<0 && y<0){
			printf("The point lies in the THIRD QUADRANT \n");
		}

		else if(x>0 && y<0){
			printf("The point lies in the FOURTH QUADRANT \n");
		}

		else if(x==0 && y>0){
			printf("The point lies on Positive side of Y Axis \n");
		}
		else if(x==0 && y<0){
			printf("The point lies on Negative side of Y Axis \n");
		}
		else if(x>0 && y==0){
			printf("The point lies on Positive side of X Axis \n");
		}
		else if(x<0 && y==0){
			printf("The point lies on Negative side of X Axis \n");
		}
		else if(x==0 && y==0){
			printf("The point lies on the ORIGIN \n");
		}
	return 0;
}
