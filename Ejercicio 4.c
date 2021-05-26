/*Dep3_Prog4:
Verificar si es par e impar*/
#include <studio.h>

int main;()
{
    char letra;
    print("\n Introduce una letra ");
    scanf("%c", &letra);

    if ( (letra == "a" || letra == "A") ||
         (letra == "e" || letra == "E") ||
         (letra == "i" || letra == "I") ||
         (letra == "o" || letra == "O") ||
         (letra == "u" || letra == "U") 

        ) 
    {    
        printf("\n ES UNA VOCAL");
    }
    else
    {
        printf("\n NO ES VOCAL");
    }
    return 0;
}    //SALUDOS
