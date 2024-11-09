#include<stdio.h>
int main(){
	int hours,totalearning,s;
	float tax,earnings;
	printf("Enter employees working hours:");
	scanf("%d",&hours);
	if( hours <=40){
		totalearning=hours*100;
	}else if(hours>40&& hours<=60){
			totalearning=hours*150;
	}else if(hours>60&& hours<=80){
			totalearning=hours*200;
	}else if(hours>80){
		totalearning=hours*250;
	}
	tax=(0.5/100)*totalearning;
	earnings=totalearning -tax;
	printf("employee total earning after tax is %f",earnings);
}
