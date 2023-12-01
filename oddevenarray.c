#include<stdio.h>
void main ()
{
   
   int n;
   printf("enter the size of the array");
    scanf ("%d",&n);
    int a [n],i,sum=0, sum1=0;
    printf("enter the array elements");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum =sum +a[i];
        else
        sum1=sum1+a[i];

    }
    printf("sum of the even  elements in array:%d",sum);
    printf("summ of  the odd  elements in array:%d",sum1);

}