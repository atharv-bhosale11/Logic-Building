import java.io.*;
import java.util.*;

class program1
{
    public static void main(String[] args) 
    {
        String Fname = null;
        File fobj = null;
        FileInputStream fiobj = null;

        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter file name: ");
            Fname = sobj.nextLine();

            fobj = new File(Fname);

            fiobj = new FileInputStream(fobj);

            System.out.println("File Opened Successfully!!!");

            fiobj.close();
        }
        catch(IOException iobj)
        {
            System.out.println(iobj);
        }
    }
}
