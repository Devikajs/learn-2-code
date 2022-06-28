//C PROGRAMMING TO DISPLAY THE ATM TRANSACTION
#include<stdio.h>
unsigned amount=1000,deposit,withdraw;
int choice,pin,k;
char transaction='x';
int main()
{
  while(pin!=3457)
  {
    printf("ENTER YOUR SECRET PIN NUMBER:");
  scanf("%d",&pin);
    if(pin!=3457)
      printf("PLEASE ENTER VALID PASSWORD\n ");
    }
    
do{
  printf("************Welcome to ATM Service*************\n");
  printf("1.Check Balance\n");
printf("2.Withdraw cash\n");
    printf("3.Deposit cash\n");
  printf("4.Exit\n");
  printf("***********?**************?*************\n\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice)
{
  case 1:
        printf("\n YOUR BALANCE IN RS: %1u",amount);
       break;
  case 2:
  printf("\nENTER THE AMOUNT TO WITHDRAW: ");
  scanf("%1u",&withdraw);
  if(withdraw %100!=0)
  {
    printf("PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
    }
  else if(withdraw>(amount-500))
  {
    printf("INSUFFICIENT BALANCE");
    
  }
else {
  amount=amount-withdraw;
  printf("\n\n PLEASE COLLECT CASH");
  printf("\nYOUR CURRENT BALANCE IS %1u", amount);
}  
  break;
          case 3:
  printf("\n ENTER THE NUMBER TO DEPOSIT");
  scanf("%1u",&deposit);
  amount=amount+deposit;
  printf("YOUR BALANCE IS %1u",amount);
  break;
 case 4:
  printf("\nTHANK U USING ATM");
  break;
  default:
  printf("\nINVALID CHOICE");
  }
  printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n:\n");
  fflush(stdin);
  scanf("%c",&transaction);
  if(transaction=='n'||transaction=='N')
    k=1;
  }
  while(!k);
  printf("\n\n THANKS FOR USING OUT ATM SERVICE ");
  return 0;
  
}
