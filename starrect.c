#include<stdio.h>
//Code to create a rectangle of length and breadth desired by user.
//By Jay Mistry
int main(){
    int nHeight, nWidth,i,j;
    printf("Enter the height of box : ");
    scanf("%d", &nHeight);

    printf("Enter the width of box : ");
    scanf("%d", &nWidth);

    for(i=0;i<=nHeight;i++){
        if(i==0 || i== nHeight){
            for(j=0;j<nWidth;j++){
                printf("* ");
            } 

        } else {
            printf("* ");
            for(j=0;j<(nWidth-2);j++){
                printf("  ");
            }
            printf("*");
        }

        printf("\n");

    }

    return 0;
}