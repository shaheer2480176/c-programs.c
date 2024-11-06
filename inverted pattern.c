#include<stdio.h>
int main(){
	int  i,sum=0,range;
	printf(" the range of of sum is from 0 to: ");
	scanf("%d",&range);
	for(i=0;i<=range;i++){
		if(i%2==0)
		sum+=i;
	
	}
	printf("%d\n",sum);
}
