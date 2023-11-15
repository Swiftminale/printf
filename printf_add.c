#include <stdio.h>
#include "main.h"
int printf_add() {
    int number = 42;
    float floatNumber = 3.14;

    // + flag
    printf("Using + flag:\n");
    printf("%+d\n", number); // Positive number with sign
    printf("%+d\n", -number); // Negative number with sign
    printf("%+f\n", floatNumber); // Positive float with sign
    printf("%+f\n", -floatNumber); // Negative float with sign
    printf("\n");

    // space flag
    printf("Using space flag:\n");
    printf("% d\n", number); // Positive number with space
    printf("% d\n", -number); // Negative number with sign
    printf("% f\n", floatNumber); // Positive float with space
    printf("% f\n", -floatNumber); // Negative float with sign
    printf("\n");

    // # flag
    printf("Using # flag:\n");
    printf("%#o\n", number); // Octal with prefix
    printf("%#x\n", number); // Hexadecimal with prefix
    printf("%#e\n", floatNumber); // Scientific notation with decimal point
    printf("%#g\n", floatNumber); // Shortest representation with decimal point
    printf("\n");

    return 0;
}

