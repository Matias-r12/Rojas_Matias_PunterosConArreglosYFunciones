#include <stdio.h>
float CalcularPXRef(float *ptrf);
int main(){
    float notas[5]={6.5,7.1,8,6,5},p;
    float result=CalcularPXRef(notas);
        printf("\nEl promedio es  a: %.2f",CalcularPXRef(notas));
    return 0;
}
float CalcularPXRef(float *ptr){
   float p;
   for (int i = 0; i < 5; i++)
    {
        printf("\n notas [%d] %.1f",i, ptr[i]);
    } 
    p=(ptr[0]+ptr[1]+ptr[2]+ptr[3]+ptr[4])/5.0;
    return p;
}