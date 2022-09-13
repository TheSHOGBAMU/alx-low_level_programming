#include <stdio.h>
int main()
{
    int integerType;
    long int long_intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of a long int: %ld bytes\n", sizeof(long_intType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));

    return 0;
}
