/*
A bank wants to automate ATM transactions.

Write a program that accepts the current account balance and the withdrawal amount from the user and validates the transaction according to the following rules.

Transaction Rules
Withdrawal amount must be greater than 0.
Withdrawal amount must be a multiple of ₹100.
Maximum withdrawal limit per transaction is ₹25,000.
Withdrawal amount cannot exceed the available account balance.
After withdrawal, at least ₹1,000 must remain in the account.
If all conditions are satisfied, the transaction should be successful.

*/

import java.util.*;

class program1
{   
    public static void ATM(int iBalance, int iWithdraw)
    {

        if(iWithdraw <= 0)
        {
            System.out.println("Invalid Withdraw Amount");
        }
        else if(iWithdraw % 100 != 0)
        {
            System.out.println("Withdrawl amount must be Multiple of Rs 100");
        }       
        else if(iWithdraw > 25000)
        {
            System.out.println("Maximum Amount not be exceed Rs25000");
            System.out.println("Balance is"+iBalance+"Rs");
        }
        else if(iWithdraw > iBalance)
        {
            System.out.println("Sorry!!! Insufficient Balance");
        }
        else 
        {
            int iRemaning = 0;

            iRemaning = iBalance - iWithdraw;
            
            if(iRemaning < 1000)
            {
                System.out.println("Transaction Failed: Minimum balance of ₹1,000 must be maintained");
            }
            else
            {
                System.out.println("Transaction Successfull");
                System.out.println("Remaining Balance is: "+iRemaning+"Rs");
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Current Balance: ");
        int iNo = sobj.nextInt();

        System.out.println("Enter Withdrawl Amount: ");
        int iValue = sobj.nextInt();

        ATM(iNo, iValue);
      
    }
}
  
