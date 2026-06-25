//ATM
#include<stdio.h>
#include<dos.h>
void balance(int);
void withdraw(int);
void deposit(int);
void pinchange(int);
void main()
{
    int PIN=1234,UPIN,Balance=10000,opt;
    printf("Enter PIN:");
    scanf("%d",&UPIN);
    if(PIN==UPIN)
    {
        printf("WELCOME TO BALAYYA BANK\n");
        printf("1. BALANCE     2. WITHDRAW\n");
        printf("3. DEPOSIT     4. PIN CHANGE\n");
        printf("Choose the option to process...");
        scanf("%d",&opt);
        if(opt==1)
        {
            balance(Balance);
        }
        else if(opt==2)
        {
            withdraw(Balance);
        }
        else if(opt==3)
        {
            deposit(Balance);
        }
        else if(opt==4)
        {
            pinchange(PIN);
        }
        else
        {
            printf("Wrong option...choose correct option to process..");
        }
    }
    else
    {
        printf("Wrong PIN");
    }
}
void balance(int Bal)
{
    printf("Your account Balance is:%d",Bal);
}
void withdraw(int Bal)
{
    int ubal;
    printf("Enter Amount to withdraw:");
    scanf("%d",&ubal);
    if(ubal<=Bal)
    {
        if(ubal%100==0)
        {
            printf("Your transaction is in process...\n");
            sleep(1);
            printf("Collect your cash....\n");
            sleep(1);
            Bal=Bal-ubal;
            printf("Your updated account Balance is:%d",Bal);
        }
        else
        {
            printf("Please enter only 100 combinations....");
        }

    }
    else
    {
        printf("Insufficient Balance.....");
    }

}
void deposit(int Bal)
{
    int Ubal;
    printf("Enter amount to Deposit:");
    scanf("%d",&Ubal);
    Bal=Bal+Ubal;
    printf("Your updated account Balance is:%d",Bal);
}
void pinchange(int PIN)
{
    int oldpin, newpin;
    printf("Enter oldpin:");
    scanf("%d",&oldpin);
    if(oldpin==PIN)
    {
        printf("Enter newpin:");
        scanf("%d",&newpin);
        PIN=newpin;
        printf("PIN Changed Successfully.....");
    }
    else
    {
        printf("Wrong PIN.....");
    }
}
