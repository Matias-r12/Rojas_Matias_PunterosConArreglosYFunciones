#include <stdio.h>

int main()
{
    float notas[5]={6.5,7.1,8,6,5};
    for (int i = 0; i < 5; i++)
    {
        printf("\n notas [%.1f] %.1f",notas[i], notas[i]);
    }
    

    return 0;
}
