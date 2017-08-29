#include<stdio.h>
#include<stdlib.h>
//Code to find sum of first 'n' numbers using for loop
//By Jay Mistry

int main(){
	int a,sum=0,i=1;
	printf("Enter the number upto which the sum is desired : ");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		sum+=i;
	}
	
	printf("\nThe sum is %d",sum);
	
	return 0;
	
}
