#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
        sum=sum+num%10;
        num=num/10;

    }

printf("the sum of number is %d",sum);

return 0;
}