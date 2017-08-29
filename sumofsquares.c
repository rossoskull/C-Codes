#include<stdio.h>
//Code to find the sum of squares of first n natural numbers.
//By Jay Mistry

int main(){
int num,i,sum=0;

printf("Enter the number till which you want the sum of squares : ");
scanf("%d", &num);

for(i=1;i<=num;i++){
    sum+=i*i;
}

printf("The sum of squares of first %d natural numbers is %d \n",num,sum);

return 0;
}