class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0;

        while(num != 0)
        {
            iDigit = num % 10;
 
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            num = num / 10;
        }
        System.out.println("Even Sum = "+iSumEven);
        System.out.println("Odd Sum = "+iSumOdd);
    }
      
}       

class program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenOddDigits(123456);
        
    }
}
