#include<stdio.h>
//Code to check if a given number is a palindrome
//By Jay Mistry
int main(){
	int num, tempNum, palNum=0;
	printf("\nEnter the number : ");
	scanf("%d", &num);
	tempNum = num;
	for( ; ; ){
		palNum = palNum*10 + (tempNum%10);
		tempNum = tempNum/10;
		if(tempNum == 0){
			break;
		}		
	}
	if(palNum == num){
		printf("\nThe given number is a palindrome.");
	} else {
		printf("\nThe given number is not a palindrome.");
	}
	
	return 0;
}
