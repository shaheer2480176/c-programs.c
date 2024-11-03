#include<stdio.h>
int main(){
	int a,b,c,d,total,per;
	printf("enter the first number:\n");
	scanf("%d",&a);
	printf("enter the first number:\n");
	scanf("%d",&b);
	printf("enter the first number:\n");
	scanf("%d",&c);
	printf("enter the first number:\n");
	scanf("%d",&d);
	total=a+b+c+d;
	printf("Total=%d\n",total);
	per=total/4;
	if(per>=95 && per<=100){
		printf("A+\n");
	} else if(per>=85 && per<=94){
		printf("A\n");
	 }   else if(per>=75 && per<=84){
		printf("B\n");
	}    else if(per>=65 && per<=74){
		printf("C\n");
	     }else{
		printf("F\n");
	}

	
	
	
}
