class Logic
{
    void productOfDigits(int num)
    {
        int iCnt = 0, iProduct = 1, iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iProduct = iProduct * iDigit;  
            num = num / 10;
        }
        System.out.println("Product of Digits are: "+iProduct);
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.productOfDigits(234);
    }
}
