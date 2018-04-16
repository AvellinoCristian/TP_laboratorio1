#include <stdio.h>
#include <stdlib.h>

/** \brief retorna 1 si la cadena tiene solo numeros
caso contrario, retorna 0
 * \param char cadema[] = Cadena a ser validada.
 * \return 1 si tiene numeros, 0 si al menos un caracter no es numero hasta llegar al NULO
 */

int esNumerico(char cadena[])
{
    int i=0;
    while (cadena[i] != '\0')
    {
        if (cadena[i]<'0' || cadena[i]>'9')
            return 0;
        i++;
    }
    return 1;
}

int retornarSuma(int a,int b)
{
    int resul;
    resul=a+b;
return resul;
}

int retornarResta(int a,int b)
{
int resul;
    resul=a-b;
return resul;
}


float retornarDivision(int a,int b)
{
    float resul;
    resul=(float) a/b;
return resul;
}

float retornarMultiplicacion(int a,int b)
{
    float resul;
    resul=(float) a*b;
return resul;
}

int retornarFactorial(int a)
{
    int i;

    for (i=a-1;i>=1;i--)
        a=a*i;

return a;
}
