import java.util.Scanner;

class MinuteToYears 
{
       public static void main() 
      {
       Scanner input = new Scanner(System.in);
       // Prompt user for number of minutes
       System.out.println("Enter the number of minutes:");
       int minutes = input.nextInt();

       // Number of minutes in a year
       int year = minutes / 525600;
       int day = minutes / 1440;
       int remainingMinutes = day % 525600;


       System.out.println(minutes + " minutes is " + year + " years and "  +  remainingMinutes + " days ");
       }

   }