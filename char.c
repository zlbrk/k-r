#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина строки в потоке */

/* вывод самой длинной строки в потоке */
int main() {
	int len; /* длина текущей строки */
	int max; /* текущая максимальная длина */
	char line[MAXLINE]; /* текущая введенная строка */
	char longest[MAXLINE]; /* самая длинная строка из введенных */

	int getline(char line[], int maxline); /* прототип функции getline */
	void copy(char to[], char from[]); /* прототип функции copy */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) /* была непустая строка */
		printf("%s\n", longest);
	return 0;
}

/* getline: считывает строку в s, возвращает её длину */
int getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0'; /* Это обозначение конца строки в Си */
	return i;
}

/* copy: копирует строку 'from' в 'to'; длина to считается достаточной */
void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}