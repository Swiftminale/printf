#include <stdio.h>
#include "main.h"
int printf_add() {
    int number = 42;
    float floatNumber = 3.14;

    printf("Using + flag:\n");
    printf("%+d\n", number);
    printf("%+d\n", -number);
    printf("%+f\n", floatNumber);
    printf("%+f\n", -floatNumber);
    printf("\n");


    printf("Using space flag:\n");
    printf("% d\n", number);
    printf("% d\n", -number);
    printf("% f\n", floatNumber); 
    printf("% f\n", -floatNumber);
    printf("\n");


    printf("Using # flag:\n");
    printf("%#o\n", number); 
    printf("%#x\n", number);
    printf("%#e\n", floatNumber); 
    printf("%#g\n", floatNumber); 
    printf("\n");

    return 0;
}

