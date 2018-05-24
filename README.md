# README.md
Проработка материалов из книги Брайана Кернигана и Дениса Ритчи
"Язык программирования Си" (второе издание, 2015 г.)
---
Exercises with the code from "The C Programming Language"
Book by Brian Kernighan and Dennis Ritchie
***

# ОПИСАНИЕ ПРОГРАММ
1. hello &mdash; выводит традиционное приветствие
2. i2o &mdash; копирует входной поток в выходной
3. nc &mdash; подсчитывает количество символов во входном потоке
4. nl &mdash; подсчитывает количество строк во входном потоке, даже если каретка ни разу не переводится (например, файл содержит всего одно слово)

## Пример использования i2o для копирования файлов
```console
zlbrk@dell:~$ cat file1 | i2o > file2
```

## Пример использования nc для подсчета символов в файле
```console
zlbrk@dell:~$ cat file1 | nc
```

## Пример использования nl для подсчета строк в файле
```console
zlbrk@dell:~$ cat file1 | nl
```

## Пример оформления кода
<pre lang="c">
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
</pre>