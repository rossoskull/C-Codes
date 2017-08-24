#include<stdio.h>
#include<stdlib.h>
//Code to find G.C.D of two numbers
//By Jay Mistry

int main(){
	int a, b, c, d;
	
	printf("Enter the first number :");
	scanf("%d", &a);
	
	printf("Enter the second number :");
	scanf("%d", &b);
	
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	
	d=b;
	
	for(d=b;d>1;d--){	
	if(a%d==0 && b%d==0){
		printf("\nThe G.C.D of %d and %d is %d", a,b,d);
		break;
	} else {
		continue;
	}
}
	
	
	return 0;
}
