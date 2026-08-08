import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory Name : ");
        String Dname = sobj.nextLine();

        File fobj = new File(Dname);

        if(fobj.exists() && fobj.isDirectory())
        {
            FileOutputStream foobj = new FileOutputStream("Marvellous.txt");

            File Arr[] = fobj.listFiles();

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            for(int i = 0; i < Arr.length; i++)
            {
                if(Arr[i].isFile())
                {
                    String Header = "\nFile Name : "
                                  + Arr[i].getName()
                                  + "\n---------------------\n";

                    foobj.write(Header.getBytes());

                    FileInputStream fiobj = new FileInputStream(Arr[i]);

                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        foobj.write(Buffer,0,iRet);
                    }

                    fiobj.close();

                    foobj.write("\n\n".getBytes());
                }
            }

            foobj.close();

            System.out.println("Data stored successfully");
        }
        else
        {
            System.out.println("Directory not found");
        }
    }
}
