// 2. Even or Odd: Write a program to check whether a given number is even or odd.

#include<stdio.h>

int find_even_odd(int num){
    if(num%2==0){
        printf("%d is even number.",num);
    }
    else{
        printf("%d is odd number.",num);
    }
}

int main(){
    int num;
    printf("Enter the number that you want to check whether it is even or odd: ");
    scanf("%d",&num);

    int n = find_even_odd(num);


return 0;
}