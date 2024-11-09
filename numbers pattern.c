#include<stdio.h>
int main(){
	int i,j,range;
	int number;
	printf("Enter your starting number:");
	scanf("%d",&number);
	printf("Enter your range :");
	scanf("%d",&range);
	for(i=range;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" %d ",number);
			number--;
		}
		printf("\n");
	}
}
