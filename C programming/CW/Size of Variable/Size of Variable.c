#include <stdio.h>

int main() {
    int i;
char c;
float f;
long l;
long long ll;
double d;

    printf("Size of variables=\n");
    printf("int= %d bytes\n", sizeof(i));
    printf("char= %d bytes\n", sizeof(c));
    printf("float= %d bytes\n", sizeof(f));
    printf("long= %d bytes\n", sizeof(l));
    printf("long long= %d bytes\n", sizeof(ll));
    printf("double= %d bytes\n", sizeof(d));

return 0;
}
