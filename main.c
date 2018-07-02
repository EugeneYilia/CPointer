#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 3;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int e = &c;
    int f = c;
    int *g = f;

    char* k ="123456";
    char j[] = "qwewrq";

    printf("%d\n",&k);
    printf("%s\n",k);
    printf("\n");

    printf("%d\n",&j);
    printf("%s\n",j);
    printf("\n");

    printf("%d\n", &a);
    printf("%d\n", a);
    printf("\n");

    printf("%d\n", &b);
    printf("%d\n", b);
    printf("%d\n", *b);
    printf("\n");

    printf("%d\n", &c);
    printf("%d\n", c);
    printf("%d\n", *c);
    printf("%d\n", **c);
    printf("\n");

    printf("%d\n", &d);
    printf("%d\n", d);
    printf("%d\n", *d);
    printf("%d\n", **d);
    printf("%d\n", ***d);
    printf("\n");

    printf("%d\n", &e);
    printf("%d\n", e);
    printf("\n");

    printf("%d\n", &f);
    printf("%d\n", f);
    printf("\n");

    printf("%d\n", &g);
    printf("%d\n", g);
    printf("%d\n", *g);

//    int as = malloc(5000);
//    __mingw_str_free(as);

    return 0;
}