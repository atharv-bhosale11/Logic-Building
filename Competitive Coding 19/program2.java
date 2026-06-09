class Logic
{
    void DisplayGrade(int marks)
    {
        if(marks >= 90 && marks <= 100)
        {
            System.out.println("Grade A");
        }
        else if(marks >= 80)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 35)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Fail :/");
        }
    }
}       


class program2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayGrade(82);
    }
}
