#include<stdio.h>
#include<stdlib.h>
//Code to check whether a given number is an Armstrong number.
//By Jay Mistry

int main(){
    int num, temp, nOfDigits, i, sum=0;

    printf("Enter the number : ");
    scanf("%d", &num );

    temp = num;

    for(nOfDigits=0; ;nOfDigits++){
        if(temp%10==0){
            break;
        }
        temp/=10;
    }

    temp = num;

    for(i=0; i<nOfDigits; i++){
        int x=1,y,j;
        y= temp%10;
        for(j=1; j<=nOfDigits; j++){
            x*=y;
        }
        sum+=x;
        temp/=10;
    }

    (sum==num)?(printf("The number is an Armstrong number.\n")):(printf("The number is not an Armstrong number.\n"));

    return 0;
}