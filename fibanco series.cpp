#include<stdio.h>
int main(){
	int a,b,i,c;
a=0;
b=1;
c=a+b;
printf("Fibanco series :%d\n%d\n%d\n",a,b,c);
for(i=1;i<10;i++){
	a=b;
	b=c;
	c=a+b;
	printf("%d\n",c);
}
}
