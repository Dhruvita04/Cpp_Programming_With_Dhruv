import java.util.*;
class Fibonacci2
{
   public static void main() 
   {
       Scanner ob=new Scanner(System.in);
       int n1 = 0, n2 = 1, n3, i;
       System.out.println("Enter the max value for the series");
       int max=ob.nextInt();
       System.out.print(n1 + " " + n2);
       for (i = 2; i < max; ++i) 
       {
          n3 = n1 + n2;
          System.out.print(" " + n3);
          n1 = n2;
          n2 = n3;
       }
    }
 }