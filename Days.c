#include<stdio.h>
int main(){
int days; 
printf("Enter days(1-7):");
scanf ("%d",&days);
switch (days)
{
case 1:printf("Mondey \n");
    break;
case2:printf(" Tuesday\n");
break;
case3:printf(" Wednesday\n");
break;
case 4: printf("Thursday\n");
break;
case 5:printf("Friday\n");
break;
case 6:printf(" Saturday\n");

default:printf("not invild day\n");
    break;
}
}

