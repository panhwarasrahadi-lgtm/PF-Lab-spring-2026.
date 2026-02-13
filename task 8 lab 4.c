#include <stdio.h>
#include <math.h>
int main() {
	int choice;
	int a;
	int b;
	float c;
	float x;
	float y;
	printf("enter (1-10) to select calculation");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("addition \n ");
		printf(" enter 2 numbers\n");
		scanf ("%d",&a);
		scanf ("%d",&b);
		printf(" sum is %d",a+b);
		
		 break;
		 
		 case 2:
		printf("subtraction \n ");
		printf(" enter 2 numbers\n");
		scanf ("%d",&a);
		scanf ("%d",&b);
		printf(" difference is %d",a-b);
		
		break;
		case 3:
		printf("multiplication \n ");
		printf(" enter 2 numbers\n");
		scanf ("%d",&a);
		scanf ("%d",&b);
		printf(" product is %d",a*b);
		
		break;
		case 4:
		printf("division \n ");
		printf(" enter 2 numbers\n");
		scanf ("%d",&a);
		scanf ("%d",&b);
		if(b==0){
			printf("invalid\n");
		}
		else{
			printf(" quotient is %d\n",a/b);
		}
		
		
		break;
		case 5:
		printf("square of a number \n ");
		printf(" enter a numbers\n");
		scanf ("%d",&a);
		printf(" square is %d",a*a);
		
		break;
		case 6:
		printf("cube of a number \n ");
		printf(" enter a numbers\n");
		scanf ("%d",&a);
		printf(" cube is %d",a*a*a);
		break;
		
		case 7:
		printf("square root of a number \n ");
		printf(" enter a numbers\n");
		scanf ("%f",&c);
		if ("c<0"){
			printf("invalid\n");
		}
		else {
			printf(" square root is %.2f\n",sqrt(c));
		}
		
		break;
		case 8:
		printf("power x^y \n ");
		printf(" enter 2 numbers\n");
		scanf ("%f",&x);
		scanf ("%f",&y);
		printf(" power is %.2f",pow(x,y));
		
		case 9:
		printf("absolute value \n ");
		printf(" enter a numbers\n");
		scanf ("%d",&b);
		printf(" absolute value is %d",abs(b));
		
		case 10:
		printf("modulus\n ");
		printf(" enter 2 numbers\n");
		scanf ("%d",&a);
		scanf ("%d",&b);
		if (b == 0) {
        printf("modulus by zero is not allowed");
    } else {
        printf("modulus is %d", a % b);
    }
    break;
    default:
    printf("operation invalid");
		
		
		
		
	}
	
		
	}



