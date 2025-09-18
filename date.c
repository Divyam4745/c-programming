#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a,b;
    a.day = 5;
    a.month = 12;
    a.year = 1999;

    b.day = 19;
    b.month = 1;
    b.year = 2023;

    bool flag = true;
    if (a.day!=b.day) flag = false;     //Check Krne ke liye
    if (a.month!=b.month)flag = false;
    if (a.year!=b.year) flag = false;

    if (flag==true)
    printf("the dates are same");
    else
    printf("the date are different");
    return 0;
    
}