#include<stdio.h>  
 int main()    
{  
int a,b;  
scanf("%d",&a);
scanf("%d",&b);    
printf("Before swap %d %d \n",a,b);      
a=a+b;//a=30 (a+b)    
b=a-b;//b=10 (a-b)    
a=a-b;//a=20 (a-b)    
printf("After swap %d %d.",a,b);    
return 0;  
}   



