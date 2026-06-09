class Logic
{
    void printOddNumbers(int num)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    } 
}       

class program3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printOddNumbers(20);
        
    }
}
