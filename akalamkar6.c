//Name: Anushka Kalamkar
//Student ID: 213022136
//Lab 06

#include<stdio.h>
#include<stdlib.h>

int main(){
//integer variables
	int x = 6;
	int y = 10;
	double result = 2;
	result = x+y*x/y-x;

//Results of integers	
	printf("Expressions for integers\n");
	printf("Your first result with integers is: %lf\n", result);
	result = -x-y/x*y+x;
	printf("Your second result with integers is: %lf\n", result);
	result = x+y-x/y;
	printf("Your third result with integers is: %lf\n", result);

//double variables
	double a = 1.5;
	double b = 9.66;

	//Results of double
	printf("Expressions for double\n");
        printf("Your first result with double is: %lf\n", result);
        result = -x-y/x*y+x;
        printf("Your second result with double is: %lf\n", result);
        result = x+y-x/y;
        printf("Your third result with double is: %lf\n", result);

return EXIT_SUCCESS;

}

