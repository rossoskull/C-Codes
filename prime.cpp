#include<stdio.h>
#include<stdlib.h>
//Code to check whether a number is prime or not.
//By Jay Mistry

int main(){
	
	int a, b, c=1;
	
	printf("Check if a number is Prime : \n");
	printf("Enter the number : ");
	scanf("%d", &a);
	if(a!=1){
	for(b=a-1; b>1; b--){
		if ( a%b == 0 ){
			c=0;
			break;
		}
	}
	
	if(c==0){
		printf("\nThe number is Composite.");
	} else {
		printf("\nThe number is Prime.");
	}
	
	} else {
	printf("1 is neither Prime, nor Composite.");
	}
	


	return 0;
	
}
