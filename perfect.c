#include<stdio.h>
#include<stdlib.h>
//Code to check if a number is perfect or not.
//By Jay Mistry

int main(){
	
	int a,b,sum=0;
	
	printf("Check if a number is perfect or not.\n");
	printf("Enter the number : ");
	scanf("%d", &a);
	
	for (b=a-1; b>=1; b--){
		if(a%b==0){
			sum+=b;
		}
	}
	
	if(sum==a){
		printf("\nThe number is perfect!");
		
	} else {
		printf("\nThe number is not perfect.");
	}
	
	return 0;
}
