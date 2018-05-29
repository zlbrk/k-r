#include <stdio.h>

double maxStringLength (void); /* damned prototype! */

int main(int argc, char const *argv[])
{
	long MSL; /* maximum string length */
	MSL = (long)maxStringLength();
	printf("MSL = %ld\n", MSL); // %ld - long specifier
	return 0;
}

double maxStringLength () {
	double nc;

	nc = 0;
	for (nc = 0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);  
	return nc;
}