#include<stdio.h>
int main()
{
double num;
printf("Enter a number");
scanf("%1f",&num);
if(num<=0.0)
{
if(num==0)
printf("You entered o");
else
printf("You entered a negative number"); 
}
else
printf("You entered a positive number");

return 0;
}
