#include <stdio.h>

int main (int argc, char const *argv[]) {
    double nc;

    nc = 0;
    for (nc = 0; getchar() != EOF; ++nc)
        ; // эта точка с запятой находится на новой строке, чтобы не сбивать пользователя
    printf("%.0f\n", nc); // %ld - спецификатор типа long
    return 0;
}