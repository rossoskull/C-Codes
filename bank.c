#include<stdio.h>
#define N 3
//Code demonstrating a simple application of C to create a banking program, which has the features of account creation, credit and debit.
//By Jay Mistry
int nBalance[N],nAcc[N],nPin[N];
char fName[N][16], lName[N][16];

int main(){
    int a;
    for(a=0;a<N;a++){
        nAcc[a]=0;
    }

    printf("Welcome to JM Bank\n");
    char o;
    int index;



    for( ; ; ){

        restart:

        printf("Please enter enter one of the operations from below menu:\n");
        printf("Enter 'A' for account creation\nEnter 'D' to deposit\nEnter 'C' to credit\nEnter 'd' for account details\nEnter 'E' to exit.\n");
        printf("Enter operation : ");
        scanf("%c", &o);

        switch(o){
            case 'A':
            for(index=0;index<N;index++){
                if(nAcc[index]==0){
                    break;
                }
            }

                if(index<N){
                    printf("Enter your First Name : ");
                    scanf("%s", fName[index]);

                    printf("Enter your Last Name : ");
                    scanf("%s", lName[index]);

                    printf("Enter any 4-digit Account Number : ");
                    scanf("%d", &nAcc[index]);

                    printf("Enter a 4-digit PIN : ");
                    scanf("%d", &nPin[index]);

                    nBalance[index]=0;

                    printf("Welcom %s %s, to JM Bank.\nYour account number is %d, and PIN is %d.\nYour account balance is %d.\n", fName[index], lName[index], nAcc[index], nPin[index], nBalance[index]);

                } else {
                    printf("Oops...Maximum number of accounts are created!\nAccount creation failed.\n\n");
                }

                goto restart;

            break;

            case 'D':
                printf("Welcome to Deposit window.\n");
                index = findIndex();
                if(index<N){
                    int tempMoney;
                    printf("Hello %s %s, please enter a deposit amount : ", fName[index], lName[index]);
                    scanf("%d",&tempMoney);
                    printf("Previous balance : %d\n", nBalance[index]);
                    dcAccount(tempMoney,index);
                    printf("New balance : %d\n\n", nBalance[index]);


                } else {
                    printf("The entered Account or PIN are not correct.\n\n");
                }

                goto restart;


            break;


            case 'C':
                printf("Welcome to Credit window.\n");
                index = findIndex();
                if(index<N){
                    int tempMoney;
                    printf("Hello %s %s, please enter a deposit amount : ", fName[index], lName[index]);
                    scanf("%d",&tempMoney);
                    printf("Previous balance : %d\n", nBalance[index]);
                    if(nAcc[index]>=tempMoney){
                        dcAccount((-1*tempMoney),index);
                        printf("New balance : %d\n", nBalance[index]);
                    } else {
                        printf("You do not have enough balance to perform the transaction.\n\n");
                    }


                } else {
                    printf("The entered Account or PIN are not correct.\n\n");
                }

                goto restart;


            break;

            case 'd':
                printf("Welcome to Account Details window.\n");
                index = findIndex();
                if(index<N){
                   printf("Hello %s %s!\n", fName[index], lName[index]);
                   printf("Your account number is %d\n", nAcc[index]);
                   printf("Your PIN is %d\n",nPin[index]);
                   printf("Your current balance is %d\n", nBalance[index]);


                } else {
                    printf("The entered Account or PIN are not correct.\n\n");
                }

                goto restart;


            break;

            case 'E':
            goto end;


            break;


            default:
            printf("Please enter a valid operation.\n\n");
            break;
        }




    }

    end:
    printf("Thank you for using JM Bank.\n");

    return 0;
}

int findIndex(){
    int acc, pin, i;
    printf("Enter your account number : ");
    scanf("%d", &acc);
    printf("Enter your PIN : ");
    scanf("%d", &pin);
    for(i=0; i<N; i++){
        if(acc==nAcc[i] && pin==nPin[i]){
            break;
        }
    }

    return i;
}

dcAccount( int money, int i){
    nBalance[i]+=money;
    return 0;
}
