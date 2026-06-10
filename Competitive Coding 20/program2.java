class Logic
{
    void printReverse(int num)
    {
        int iCnt = 0;

        for(iCnt = 10; iCnt >= 0; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printReverse(10);
    }
}
