class Logic
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0, iMin = 9;

        while(num != 0)
        {
            iDigit = num % 10;
            if(iMin > iDigit)
            {
                iMin = iDigit;
            }
            num = num / 10;
        }
        System.out.println("Smallest Number is: "+iMin);
    }
}

class program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findSmallestDigit(45872);
    }
}
