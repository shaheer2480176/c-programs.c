#include<stdio.h>
int main(){
	int i,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&i);
	for(;i>=1;i--){
		printf("%d\t*",i);
		fact*=i;
	}
	printf("factorial =%d",fact);
}
