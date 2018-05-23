#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", EOF);
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	return 0;
}