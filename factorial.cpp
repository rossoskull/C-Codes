#include<stdio.h>
#include<stdlib.h>
//Code to find the factorial of a given number
//By Jay Mistry

int main(){
	
	int a, fact = 1;
	
	printf("Find the Factorial-\n");
	printf("Enter the number : ");
	scanf("%d", &a);
	
	for(a; a>1; a--){
		fact*=a;
	}
	
	printf("\nThe factorial is %d", fact);
	
	return 0;
	
}
