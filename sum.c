// Sum of Two Numbers: Write a program that takes two integers from the user and prints 
// their sum.

#include<stdio.h>

int sum_func(int a,int b){
    int sum;
    
    sum = a+b;
    printf("Sum of %d and %d is: %d",a,b,sum);

}

int main(){
    int a,b,sum;
    printf("Enter two numbers whose sum you want: ");
    scanf("%d %d",&a,&b);
    int x = sum_func(a,b);

return 0;
}