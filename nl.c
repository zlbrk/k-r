#include <stdio.h>

/*Подсчет строк во входном потоке*/

int main() {
	int c, nl, nc;
	nc = 0;
	nl = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		else if (nl == 0 && nc != 0)
			nl = 1;
	}
	printf("%d lines\n", nl);
	return 0;
}