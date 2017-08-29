#include<stdio.h>
//Code to print the following star pattern till n lines.
// *
// **
// ***
// ****
// *****
//By Jay Mistry

int main(){
    int lines, i, j;

    printf("Enter number of lines : ");
    scanf("%d", &lines);

    for(i=1;i<=lines;i++){

        for(j=0;j<i;j++){
            printf("*");
        }

        printf("\n");

    }

}