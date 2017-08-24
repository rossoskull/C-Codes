#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int num,i=0, copy = 0, length=0;
	printf("Enter the number : ");
	scanf("%d", &num);
	
	for(length=1;length<100;length++){
		if(num%(10^length)==num){
			break;
		}
	}
	printf("%d", length);
	
	int n=0, ex=0;

	for(i=1;i<100;i++){
		n=num%(10^i);
		break;
		
	}
	
	return 0;
}
