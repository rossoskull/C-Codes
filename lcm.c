#include<stdio.h>
#include<stdlib.h>
//Code to find the L.C.M of two numbers
//By Jay Mistry

int main(){
	
	int a, b, c, d;
	printf("Enter the first number : ");
	scanf("%d", &a);
	
	printf("Enter the second number : ");
	scanf("%d", &b);
	
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	
	for( d=b ; true ; d++ ){
		if(d%a==0 && d%b==0){
			printf("\nThe L.C.M of %d and %d is %d.", a,b,d);
			break;
		} else {
			continue;
		}
	}
	
	return 0;
}
