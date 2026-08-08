import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.*;

class program2
{
    public static void main(String A[]) throws IOException
    {
        String Fname = null;
        int iRet = 0;
        File fobj = null;
        FileInputStream fiobj = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File Name: ");
      
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        fiobj = new FileInputStream(fobj);
 
        byte Buffer[] =  new byte[50];
        
        if(fobj.exists())
        {
            String str = null;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                str = new String(Buffer,0,iRet);        // Important

                System.out.print(str);
                str = null;
            }
        }
        else
        {
            System.out.println("There is no Such File");
        }
    }
}
