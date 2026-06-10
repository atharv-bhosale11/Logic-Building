class Logic
{
    void findLargestDigit(int num)
    {
        int iDigit = 0, iMax = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            if(iMax < iDigit)
            {
                iMax = iDigit;
            }
            num = num / 10;
        }
        System.out.println("Largest Number is: "+iMax);
    }
}

class program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findLargestDigit(83429);
    }
}
