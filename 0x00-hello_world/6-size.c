#include <stdio.h>
int main()
{
    int integerType;
    long int long_intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long_intType));
    printf("Size of a float: %ld byte(s)\n",sizeof(floatType));
    printf("Size of a long long int: %ld byte(s)\n",sizeof(doubleType));
    printf("Size of a char: %ld byte(s)\n",sizeof(charType));

    return 0;
}
