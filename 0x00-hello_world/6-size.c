#include <stdio.h>
/*declare the various types of data and print out their values in bytes*/
int main(void)
{
    int integerType;
    long int long_intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of a char: %ld byte(s)\n", sizeof(charType));
    printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long_intType));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(doubleType));
    return (0);
}
