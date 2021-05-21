/*Dep3_Prog1:Básico*/

*include <stdio.h>

int main()
{
    int a, b, c;
    printf("\n Escribe el valor a: ");
    scanf("%d", &a);
     printf("\n Escribe el valor b: ");
    scanf("%d", &b);
     printf("\n Escribe el valor v: ");
    scanf("%d", &c);

    a = a + 1;
    b = b * 2;
    c = c * c;

    printf ("\n\n ahora el valor de a es %d",a);
    printf ("\n\n ahora el valor de a es %d",b);
    printf ("\n\n ahora el valor de a es %d",c);
    return 0;
}
