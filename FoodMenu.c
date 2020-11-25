#include <stdio.h>
int main()
{                                                      
     int i;
     scanf("%d",&i);
     switch (i)
     {
          case 1:
             printf("Pizza\n");
             printf("Rs 239");
             break;
          case 2:
             printf("Burger\n");
              printf("Rs 129");
             break;
          case 3:
             printf("Pasta\n");
             printf("Rs 179");
             break;
          case 4:
             printf("French Fries\n");
             printf("Rs 99");
             break;
          case 5:
             printf("Sandwich\n");
             printf("Rs 149");
             break;
          default:
             printf("Wrong Choice");
             break;
     }
     return 0;
}
