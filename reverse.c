#include<stdio.h>
int main(){
    int reverse,num;
    printf("Enter the number1:");
    scanf("%d",&num);
    while(num>0){
        reverse=num%10;
        printf("%d",reverse);
        num=num/10;
    }
    return 0;
}
//skippinp the odd number and till 20 and this one.
//han bhai kya hal hai bhai kei bas badiya tu suna kya hal hai bhai kei bas badiya 