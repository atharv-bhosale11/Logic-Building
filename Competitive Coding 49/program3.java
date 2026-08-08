import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[])
    {
        String Fname = null;

        Scanner sobj = new Scanner(System.in);

        try
        {

            System.out.println("Enter file name : ");
            Fname = sobj.nextLine();
    
            File fobj = new File(Fname);

            if(fobj.exists())
            {
                System.out.println("File already exists");
            }
            else
            {
                // Create new file
                fobj.createNewFile();

                System.out.println("File created successfully");
            }
        }
        catch(Exception e)
        {
            System.out.println("Unable to create file");
        }

        sobj.close();
    }
}
