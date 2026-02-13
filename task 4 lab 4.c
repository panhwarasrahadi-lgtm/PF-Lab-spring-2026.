#include <stdio.h>
int main() {
	int password;
	char username[20];
	printf("Enter UserName:\n ");
	scanf("%s",&username);
	printf("Enter Password: ");
    scanf("%d",&password);
	if (username[0]=='u' && username[1]=='s'&& username[2]=='e' && username[3]=='r' && password==7890){
		printf("connected successfully");
		
		}
		else {
	    	printf("connection failed");
		}
		
	}
