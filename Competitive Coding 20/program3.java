class Logic
{
    void CheckPerfet(int num)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt < num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == num)
        {
            System.out.println("Number is Perfect");
        }
        else
        {
            System.out.println("Number is not Perfect");
        }
    }
}

class program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPerfet(6);
    }
}
