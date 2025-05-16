
// Cruz Alegria Valeria Montserrat
#include <stdio.h>

void main()
{
    int A[100];
    int i, par = 2;

    for(i = 0; i < 100; i++)
    {
        A[i] = par;
        par = par + 2;
    }

    for(i = 0; i < 100; i++)
    {
        printf("%d = %d\n", i, A[i]);
    }
}
