
Task 6

#include <stdio.h>
int main() {
	int a,b,c,d,e;
	int total;
	float percentage;
	printf("enter your marks of subject  1");
	scanf("%d",&a);
	printf("enter your marks of subject  2");
	scanf("%d",&b);
	printf("enter your marks of subject  3");
	scanf("%d",&c);
	printf("enter your marks of subject  4");
	scanf("%d",&d);
	printf("enter your marks of subject  5");
	scanf("%d",&e);
	total =a+b+c+d+e;
	percentage=(total/500.0)*100;
	printf("prcentage is %.2f\n",percentage);
	if (percentage>=85){
		printf("full scholorship");
		}
		else if (percentage>=70){
			printf ("partial scholorship");}
			else if (percentage >50){
				printf("eligible for consideration");
		
			}
		
	else{
		printf("not eligible");
	}	
	
	
	
	




}

