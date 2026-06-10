class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum of all even numbers are: "+iSum);
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumEvenNumbers(10);
    }
}
