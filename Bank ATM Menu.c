#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
long int choice, balance=5000, withdraw, deposit;

do{

printf("\n");

printf("\n----------Bank Menu----------\n");


printf("1. Check The Bank Balance \n");
printf("2. Deposit The Cash \n");
printf("3. Withdraw The Cash \n");
printf("4.Exit \n");

printf("\n");

printf("Enter the Choice (1-4): ");
scanf("%ld",& choice);

switch( choice )
{
case 1: printf("Please wait, processing...\n");
        sleep(5);
        printf("Bank Balance: %ld",balance);
        break;

case 2: printf("Enter the deposit amount: ");
        scanf("%ld",&deposit);

        if(deposit > 0)
        {
        balance += deposit;

        printf("Please wait, processing...\n");
        sleep(5);

        printf("\nAmount Successfull Deposit in your Bank Account: rs %ld\n",deposit);
        }

        else
        {
        printf("Invalid Amount");
        }

        break;


case 3: printf("Enter the Withdraw Amount: ");
        scanf("%ld",&withdraw);

        if(withdraw>0 && withdraw<=balance)
        {
        balance -= withdraw;

        printf("Please wait, processing...\n");
        sleep(5);

        printf(" \nAmount is successfull Withdraw: rs %ld \n",withdraw);
        }

        else if(withdraw > balance)
        {
        printf("insufficient amount");
        }

        else
        {
        printf("invalid Digit Input");
        }

        break ;

 case 4: exit (0);

 default: printf("Invalid Option Choose\n");

}

}
while (choice != 4 );

return 0;

}
