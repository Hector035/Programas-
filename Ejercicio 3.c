/*Dep3_Prog3:
Verificar si es par e impar*/
#include <studio.h>

int main()
{
    int número;
    print("\n Introduce un número");
    scanf("%d", &número);

    if ( número%2 == 0) 
    {    
        printf("\n El número es PAR");
    }
    else
    {
        printf("\n El número es IMPAR");
    }
    return 0;
}