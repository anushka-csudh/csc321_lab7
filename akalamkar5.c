
//Name: Anushka Kalamkar
//Student ID: 213022136
//Lab number: 05 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
//creating 4 variables of different data types
int num = 12;
int floatNum = 3.3;
int charVar = 'c';
int doubleNum = 5.14589;

//Printing the addresses and values of each variables
printf("The integer variable is - Address: %p, Value: %d\n", (void*)&num, num);
printf("The address of float is %p, Value: %d\n", (void*)&floatNum, floatNum);
printf("The address of the character variable is %p, and its value is %d\n", (void*)&charVar, charVar);
printf("The address of the double variable is %p, and its value is %d\n", (void*)&doubleNum, doubleNum);

//if statement
   if (num > 5) {
        int innerVar = 20; // Declare and initialize a variable inside the "if" statement
        printf("Inner variable (inside if): %d\n", num);
   }

   //printf("Variable outside the block scope is: %d\n", innerVar);

//creating an array
int arr[10]={1,2,3,4,5,6,7,8,9,0};
printf("Array addresses and values are:\n");
// Print the addresses of each element in the array to show they are contiguous
    for (int i = 0; i < 10; i++) {
        printf("Array Element %d: Value = %d, Address = %p\n", i, arr[i], (void*)&arr[i]);
    }
    return 0; 
}

