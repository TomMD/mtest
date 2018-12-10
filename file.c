#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v = malloc(sizeof(int));
    v[0] = 1;
    printf("V[0]: %d\n", v[0]);
    return 0;
}
