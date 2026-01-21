#include <stdio.h>

// C Data Types 
// Integer Data Types
// Used to represent whole numbers
// Char, short int (short), int, long int (long), long long int (long long)

// Float Data Types 
// Used to represent real numbers

// Format Specifiers
// %d is an integer Format Specifier
// %f is a Float Format Specifier
// %c is a Character Format Specifier
// %s is a String Format Specifier
// %u is an Unsigned Integer Format Specifier
// %ld is a Long Int Format Specifier 

// int main() { Working with Data Types
//     unsigned char distanceAB = 160;
//     unsigned char distanceBC = 40;

//     unsigned char distanceAC = distanceAB + distanceBC;


//     printf("Total Distance from A2C is : %d \n", distanceAC);
//     return 0;
// }

// Sizeof Operator

int main() {

    long long myLongHistory = 900;

    char size = sizeof(myLongHistory);
    
    printf("Size of char data type = %d\n", sizeof(char) );
    printf("Size of short data type = %d\n", sizeof(short) );
    printf("Size of int data type = %d\n", sizeof(int) );
    printf("Size of long data type = %d\n", sizeof(long) );
    printf("Size of long long variable = %d\n", size );

    return 0;
}