import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[])
    {
        String Fname = null;
        String Data = null;

        Scanner sobj = new Scanner(System.in);

        try
        {
            // Accept file name
            System.out.println("Enter file name : ");
            Fname = sobj.nextLine();

            // Accept data to append
            System.out.println("Enter data to append : ");
            Data = sobj.nextLine();

            // Create File object
            File fobj = new File(Fname);

            if(fobj.exists())
            {
                // Open file in append mode
                FileOutputStream foobj = new FileOutputStream(fobj, true);

                // Convert String into byte array
                byte Buffer[] = Data.getBytes();

                // Write data at the end of file
                foobj.write(Buffer);

                System.out.println("Data appended successfully");

                foobj.close();
            }
            else
            {
                System.out.println("There is no such file");
            }
        }
        catch(Exception e)
        {
            System.out.println("Unable to append data");
        }

        sobj.close();
    }
}
