#include<stdio.h>
int main(){
	char a,b,c;
	printf("******************************\n");
	printf("WELCOME  TO SHAHEER'S QUIZ\n");
	printf("*******************************\n");
	printf("QUESTION # 1 :\n");
	printf("What is the capital city of Japan?\n");
	printf("A- Sydney \t B -Karachi \n C- TOkyo \t D- DELHI \n");
	printf("Enter the correct option : \n");
	scanf("%c",&a);
	if(a=='A'){
		printf("Wrong answer\n");
	}else if(a=='B'){
		printf("Wrong answer\n");
	}else if(a=='C'){
		printf("YOUR Answer is correct\n");
	}else if(a== 'D'){
		printf("Wrong answer\n");
	}else{
		printf("Wrong input\n");
	}
	
	printf("Question # 2:\n");
	printf("What is the capital city of Pakistan :\n");
	printf("A- Sydney \t B -Karachi \n C- TOkyo \t DELHI \n");
		printf("Enter the correct option : \n");
		scanf(" %c",&b);
		if(b=='A'|| b=='C'|| b=='D'){
			printf("Wrong answer\n");	
		}else if(b=='B'){
			printf("Your Answer is correct");
		}else{
			printf("Invalid input");
			}
				printf("Question # 3:\n");
				printf("Which element has the chemical symbol 'O'?\n");
					printf("A-Nitrogen \t B-Oxygen \n C-Helium \t D-Hydrogen \n");
						printf("Enter the correct option : \n");
							scanf(" %c",&c);
								if(c=='A'|| c=='C'|| c=='D'){
			printf("Wrong answer\n");	
		}else if(c =='B'){
			printf("Your Answer is correct");
		}else{
			printf("Invalid input");
			}
							
						
					
				
				
				
}
