#include <stdio.h>

#include "module1.h"
#include "module2.h"

int main(int argc, char **argv)
{
    // argv is an array of pointers, each pointer dereferences to a pointer to a character

    // argv + 0 points to the pointer that points to the 1st array (command name)
    printf("  *(*(argv + 0) + 0) = %c", (char) *(*(argv + 0) + 0));
    printf("  *(*(argv + 0) + 1) = %c", (char) *(*(argv + 0) + 1));
    printf("  *(*(argv + 0) + 2) = %c", (char) *(*(argv + 0) + 2));
    printf("  *(*(argv + 0) + 3) = %c", (char) *(*(argv + 0) + 3));
    printf("  *(*(argv + 0) + 4) = %c", (char) *(*(argv + 0) + 4));
    printf("\n");

    // argv + 1 points to the pointer that points to the 2nd array (first arguement)
    printf("  *(*(argv + 1) + 0) = %c", (char) *(*(argv + 1) + 0));
    printf("  *(*(argv + 1) + 1) = %c", (char) *(*(argv + 1) + 1));
    printf("  *(*(argv + 1) + 2) = %c", (char) *(*(argv + 1) + 2));
    printf("  *(*(argv + 1) + 3) = %c", (char) *(*(argv + 1) + 3));
    printf("  *(*(argv + 1) + 4) = %c", (char) *(*(argv + 1) + 4));
    printf("\n");

    printf("argc = %d", argc );

    fnc1(0);
    fnc2(0);

    return 0;

}