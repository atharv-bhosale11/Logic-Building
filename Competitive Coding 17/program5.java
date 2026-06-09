class Logic
{
    void printTable(int num)
    {
       int iCnt = 0;

       for(iCnt = 1; iCnt <= 10; iCnt++)
       { 
        System.out.println(num+" * "+iCnt+" = "+num*iCnt);
       }
    }
}

class program5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printTable(5);
    }
}
