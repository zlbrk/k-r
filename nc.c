#include <stdio.h>

int main (int argc, char const *argv[]){
    long nc;

    nc=0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc); // %ld - спецификатор типа long
    return 0;
}