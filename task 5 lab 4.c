#include <stdio.h>
int main() {
	int choice;
	int a=1000;
	int b;
	printf("enter (1-4) to select banking services");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("balance inquiry \n ");
		printf("%d",a);
		 
		 break;
		 case 2:
		printf("withdraw money\n");
		scanf("%d",&b);
		printf("remaining balance %d",a-b);
		
		break;
		case 3:
		printf("deposit money\n");
		scanf("%d",&b);
		printf("total amount after deposit %d",a+b);
		
		break;
		case 4:
		printf("exit");
		
		break;
		default:
		printf("invalid choice");
		
		
		
	}
	
		
	}





