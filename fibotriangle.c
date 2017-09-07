#include<stdio.h>
//Code to print fibonacci triangle
//By Jay Mistry

int main(){
    int up=1, down=1, sum=0, lines,i,j;
    printf("Enter number of lines until which you want to print the Fibonacci Triangle : ");
    scanf("%d", &lines);
    
    for(i=0;i<lines;i++){
        for(j=0;j<=i;j++){
            printf("%d ", down);
            sum=up+down;
            up=down;
            down=sum;

        }
        printf("\n");
    }


    return 0;
}