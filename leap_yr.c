// 5. Leap Year Check: Write a program to check whether a given year is a leap year.

#include<stdio.h>

int find_leap_year(int yr){
    if (yr % 4 == 0){
        if (yr % 100 == 0){
            if (yr % 400 == 0){
                printf("%d is a Leap year",yr);
            }
            else{
                printf("%d is not a leap year",yr);
            }
        }
        else{
            printf("%d is a Leap year",yr);
        }
    }
    else{
        printf("%d is not a leap year",yr);
    }
}

int yr;
int main(){
printf("Enter the year: ");
scanf("%d", &yr);

 int l = find_leap_year(yr);
    return 0;
}
