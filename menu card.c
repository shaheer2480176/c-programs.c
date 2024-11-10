#include<stdio.h>
int main(){
	int option,quantity;
	float price,total,tax;
	printf("Juice bar Menu");
	printf("Enter the option you want:\n");
	scanf("%d",&option);
	switch(option){
		case 1:
			printf("Enter your quantity");
			scanf("%d",&quantity);
			price=150.0;
			total=price*quantity;
			printf("The total cost is %d",total);
			break;
			case 2:
			printf("Enter your quantity");
			scanf("%d",&quantity);
			price=50.0;
			total=price*quantity;
			printf("The total cost is %f",total);
			break;
			case 3:
			printf("Enter your quantity");
			scanf("%d",&quantity);
			price=300;
			total=price*quantity;
			printf("The total cost is %f",total);
			break;
			default:
				printf("invalid option");
				break;
	}
	tax=(5.0/100)* total;
	total=total+tax;
	printf("The final value after tax is %f ",total);
}
