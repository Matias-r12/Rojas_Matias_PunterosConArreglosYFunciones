#include <stdio.h>

int main()
{
    
    float notas[5]={6.5,7.1,8,6,5},p;
    for (int i = 0; i < 5; i++)
    {
        printf("\n notas [%d] %.1f",i, notas[i]);
    }
    p=(notas[0]+notas[1]+notas[2]+notas[3]+notas[4])/5.0;
        printf("\nEl promedio es igual a: %.2f",p);

    return 0;
}
