#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,rem;
	printf("Enter no. : ");
	scanf("%d", &a);
	printf("%d", a);
	rem = a%2;
	if(rem==0){
		printf("\nThe number is even.");
	} else {
		printf("\nThe number is odd.");
	}
	
	return 0;
}
