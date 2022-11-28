#include <stdio.h>

int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    n = n ^ 0xff000000;
    printf("%u", n);
    return 0;
}