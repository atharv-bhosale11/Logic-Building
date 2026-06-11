class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0, iCountEven = 0, iCountOdd = 0;

        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        System.out.println("Even Numbers: "+iCountEven);
        System.out.println("Odd Numbers: "+iCountOdd);
    }
}

class first
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countEvenOddRange(50);
    }
}
