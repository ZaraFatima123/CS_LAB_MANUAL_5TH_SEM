// 3. Largest of Three Numbers: Write a program to find the largest of three numbers.
 
#include<stdio.h>
#include<stdlib.h>

int find_largest(int x,int y,int z){
    if(x>y &&  x>z){
        printf("x having value %d is greatest.",x);
    }
    else if(y>z){
        printf("y having value %d is greatest.",y);
    }
    else{
        printf("z having value %d is greatest.",z);
    }
}

int main(){
   int x,y,z;
   printf("Enter the value of three numbers x,y and z: \n");
   scanf("%d %d %d",&x,&y,&z);

   int a = find_largest(x,y,z);

return 0;
}