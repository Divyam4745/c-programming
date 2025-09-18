#include<stdio.h>
void main ()
{
    int a[5],i,even=0,odd=0;
    printf("enter the array\n");
    for(i=0;i<=5;i++){
        scanf("%d",&a[i]);
    }
    for( i=0;i<=5;i++){
        if (a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even number=%d\n odd number=%d, even,odd\n");
}