class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0, iCntFactor = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println(iCnt);
                iCntFactor++;
            }
        }
        System.out.println("Total Factors are: "+iCntFactor);
    }
}

class program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.countFactors(20);
    }
}
