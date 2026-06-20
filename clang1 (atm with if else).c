// This is project of ATM
#include<stdio.h>
void main()
{
    int PIN,EPIN,Eamount,Damount,n;
    float Balance=25000.0;
    PIN=1234;
    printf("enter the PIN :");
    scanf("%d",&EPIN);
    if(PIN==EPIN)
    {
        printf("Choose the below options\n");
        printf("1.Balance   2.Withdraw\n");
        printf("3.Deposite  4.PIN change\n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Your balance is :%f",Balance);
        }
        else if(n==2)
        {
            printf("enter the amount to withdraw:");
            scanf("%d",&Eamount);
            if(Eamount<=Balance)
            {
                printf("Remaining Balance is:%f",Balance-=Eamount);
            }
            else
            {
                printf("Insufficient Balance");
            }
        }
        else if(n==3)
        {
            printf("Enter the amount to deposit:");
            scanf("%d",&Damount);
            if(Damount>0)
            {
                printf("Remaining balance is:%f",Balance+=Damount);
            }
            else
            {
                printf("You have not deposited or entered any amount");
            }
        }
        else if(n==4)
        {
            printf("Enter the old PIN :");
            scanf("%d",&EPIN);
            if(PIN==EPIN)
            {
                printf("Enter new PIN :");
                scanf("%d",&PIN);
                PIN=PIN;
                printf("The new PIN is :%d",PIN);
            }
            else
            {
                printf("You have Entered Wrong PIN");
            }
        }
        else
        {
            printf("You have Entered Wrong Number");
        }
    }
    else
    {
        printf("You have entered the Wrong PIN");
    }
}
