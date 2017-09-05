#include<stdio.h>
#include<stdlib.h>
//Code to get input in the format 'a+b' where a and b are integers, and output the answer as required.
//By Jay Mistry
int main(){
float a,b;
char o;
printf("Welcome to my simple calculator\nEnter the instruction in the format 'a+b', where a and b are integers, and any operator in between.");

printf("\nEnter the instruction : ");
scanf("%f%c%f", &a, &o, &b);

switch(o){
case '+':
printf("The sum is %.2f", a+b);
break;
case '-':
printf("The sum is %.2f", a-b);
break;
case '*':
printf("The sum is %.2f", a*b);
break;
case '/':
printf("The sum is %.2f", a/b);
break;
default:
printf("Please enter a proper operator.");
break;

}
return 0;
}