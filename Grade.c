#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks \n");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<=54)
    {
        printf("Grade D");
    }
    else if(marks>=55 && marks<=69)
    {
        printf("Grade C");
    }
    else if(marks>=70 && marks<=84)
    {
        printf("Grade B");
    }
    else if(marks>=85 && marks<=100)
    {
        printf("Grade A");
    }
}
