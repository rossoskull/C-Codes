#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//Code to check if a password contains atleast one upper case letter, one digit and one special character.
//By Jay Mistry

int main(){
	
	char a[8];
	int upCheck=0,numCheck=0,spCheck = 0,i;
	printf("Enter a password: ");
	scanf("%s", &a);
	printf("%s",a);
	
	for( i=0; i<8; i++){
		if(isupper(a[i])){
			upCheck=1;
			continue;			
		}
		if(isdigit(a[i])){
			numCheck=1;
			continue;
		}
		if(!(isdigit(a[i])&&isalpha(a[i]))){
			spCheck=1;
			continue;
		}
	}
	
	if(upCheck==1 && numCheck==1 && spCheck==1){
		printf("\nThe password is good.");
	} else {
		printf("\nThe password should contain atleast 1 digit, 1 uppercase letter and 1 special character.");
	}
	
	return 0;
}
