class Logic
{
    void sumofDigits(int num)
    {
        int iCnt = 0, iSum = 0, iDigit = 0;
 
        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        System.out.println("Sum of Digits = "+iSum);
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.sumofDigits(1234);
    }
}
