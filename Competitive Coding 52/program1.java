/* 
In your college library, students borrow books for exams and assignments.

The librarian wants an automatic fine calculator so that staff don't need to calculate fines manually for every student.
    
As per policy, a student can keep a borrowed book for up to 7 days without any penalty.

If the book is returned late, the fine depends on how many days the student kept the book in total.

Fine Rules
If the book is returned within 7 days → No Fine
If total days are 8 to 12 → ₹5 per day for each day beyond 7
If total days are more than 12:
₹5 per day for days 8–12
₹10 per day for each day beyond 12
*/

/*
Question 1 — Book Fine Calculator
The question says the first 7 days are free. Days 8–12 have a ₹5/day fine,
and days beyond 12 have ₹10/day. It also requires negative input validation.
*/

import java.util.*;


class program1
{   
    public static void BookFineCalc(int iValue)
    {
        int iAmount = 0;
        if(iValue < 0)
        {
            System.out.println("Invalid");
        }
        else if(iValue <= 7)
        {
            System.out.println("No fine! Return Book on time");
        }
        else if(iValue <= 12)
        {
            iAmount = (iValue - 7) * 5;
            System.out.println("Fine to be Paid: "+iAmount+"Rs");
        }
        else
        {
            iAmount = 5 * 5 + ((iValue - 12) * 10);
            System.out.println("Fine to be Paid: "+iAmount+"Rs");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Days: ");
        int iNo = sobj.nextInt();

        BookFineCalc(iNo);

    }
}
