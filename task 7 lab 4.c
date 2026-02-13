#include <stdio.h>
int main(){
	int total;
	int discount;
	printf("enter your total purchase amount");
	scanf("%d",&total);
	if (total>=5000){
		printf("you got 20 percent discount\n");
		printf ("amount after discount %d",total*20/100);
	}
	else if (total>=3000){
		printf("you got 10 percent discount\n");
		printf ("amount after discount %d",total*10/100);
	}
	else {
		printf("no discount");
	}
}
