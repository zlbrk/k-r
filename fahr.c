#include <stdio.h>

#define LOWER 0 /* нижний предел диапазона */
#define UPPER 300 /* верхний предел */
#define STEP 20 /* величина приращения */

int main(int argc, char const *argv[])
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}