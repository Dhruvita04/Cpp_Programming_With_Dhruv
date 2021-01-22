import java.util.Scanner;

class SwitchCase
{
       public static void main() 
      {
       Scanner input = new Scanner(System.in);
       
       System.out.println("Enter 1 for Hi");
       System.out.println("Enter 2 for Hey");
       System.out.println("Enter 3 for Hello");
       
       int n=input.nextInt();
       
       switch(n)
       {
           case 1:
           System.out.println("Hi");
           break;
           
           case 2:
           System.out.println("Hey");
           break;
           
           case 3:
           System.out.println("Hello");
           break;
           
           default:
           System.out.println("Wrong Choice");
           break;
       }
    }

   }