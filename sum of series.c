#include<stdio.h>
int main(){
	int i,sum=0;
	printf("Enter the first number :" );
	scanf("%d",&i);
	for(;i<=100;i++){
		if(i%2==1)
		sum+=i;
	}
	printf("%d",sum);
}
