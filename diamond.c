#include<stdio.h>
//Code to print a full diamond as follows using star pattern.
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********
//By Jay Mistry

int main(){
    int lines, i, j;

    printf("Enter number of lines : ");
    scanf("%d", &lines);

    for( i=1 ; i<=lines ; i++ ){

        for( j=0 ; j<=(lines-i) ; j++ ){
            printf("*");
        }

        for( j=1 ; j<i ; j++ ){
            printf("  ");
        }

        for( j=0; j<=(lines-i) ; j++ ){
            printf("*");
        }


        printf("\n");
    }
    lines--;
    for( i=1 ; i<=lines ; i++ ){
        
        for( j=0 ; j<=i ; j++ ){
            printf("*");
        }

        for( j=0 ; j<(lines-i) ; j++ ){
            printf("  ");
        }

        for( j=0; j<=i ; j++ ){
            printf("*");
        }


        printf("\n");

    }

    return 0;
}