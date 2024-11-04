#include<stdio.h>
int main(){
	int num,new_num=0,last_num;
		printf("enter the first number:\n");
	scanf("%d",&num);
	while(num!=0){
		last_num = num % 10;
		new_num=new_num*10+last_num;
		num=num/10;
	
	}
		printf("%d",new_num);
}
