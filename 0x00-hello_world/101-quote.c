#include <stdio.h>
#include <unistd.h>

/*write the data described in the string to a file 1*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
