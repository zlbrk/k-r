#include <stdio.h>

double maxStringLength (void); /* damned prototype! */

int main(int argc, char const *argv[])
{
	long MSL = (long) maxStringLength(); /* maximum string length */

	printf("MSL = %ld\n", MSL); // %ld - long specifier
	return 0;
}

double maxStringLength () {
	double nc;
	for (nc = 0; getchar() != EOF; ++nc);
	return nc;
}