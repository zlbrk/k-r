#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

int max;
char line[MAXLINE]; /* определение */
char longest[MAXLINE]; /* определение */

int getline(void);
void copy(void);

int main(int argc, char const *argv[])
{
	int len;
	extern int max; /* объявление */
	extern char longest[]; /* объявление */

	max = 0;
	while ((len = getline()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s\n", longest);

	return 0;
}

/* getline: специальная версия */
int getline() {
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy: специальная версия */
void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
	/* выражение во внутренних скобках вычисляется, поэтому его можно сравнить с '\0' */

}