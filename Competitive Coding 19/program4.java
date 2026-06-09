class Logic
{
    void printDigits(int num)
    {
        String str = Integer.toString(num);
        int iCnt = 0;

        for(iCnt = 0;  iCnt < str.length(); iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
    }
}       

class program4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printDigits(9876);
    }
}
