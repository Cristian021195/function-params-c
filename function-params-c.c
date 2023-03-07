#include <stdio.h>

void saludo(){
    printf("Datos");
}

void otraFuncion(int a, int b, int(*pFuncion)(int, int)){
    int resultado = pFuncion(a,b);
    printf("El resultado es: %d\n", resultado);
}

int sumar(int a, int b){
    return a + b;
}

int main()
{
    
    otraFuncion(2,4,sumar);

    return 0;
}
