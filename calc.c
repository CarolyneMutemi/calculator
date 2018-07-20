#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int argv1, argv2;
	printf("Calculator\n\n");
	printf("number of arguments passed: %d\n", argc);
	printf("first argument: %s\n", argv[0]);
	if(argc>1){
		if(argc>=3){
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		printf("The sum of %d  and %d is %d.\n", argv1, argv2, add(argv1, argv2));
		printf("The answer after subtracting %d from %d is %d.\n", argv1, argv2, subtract(argv1,argv2));
		printf("The product of %d and %d is %d.\n", argv1, argv2, multiply(argv1,argv2));
		printf("The answer after dividing %d by %d is %f.\n", argv1, argv2, divide(argv1,argv2));
		printf("The remainder after dividing %d by %d is %d.\n", argv1, argv2, modulus(argv1,argv2));
		}
	}
	return 0;
}









