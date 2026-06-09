class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt < num; iCnt++)
        {
            if(num % iCnt == 0)
            { 
                System.out.println("Number is Not Prime");
                break;
            }

        }
        System.out.println("Number is Prime");
    }
}

class program1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPrime(11);
    }
}
