#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s',auxiliar[30];
    int opcion=0,a=0,b=0,resultado;
    float resultadoF;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%d)\n",a);
        printf("2- Ingresar 2do operando (B=%d)\n",b);
        printf("3- Calcular la suma (%d+%d)\n",a,b);
        printf("4- Calcular la resta (%d-%d)\n",a,b);
        printf("5- Calcular la division (%d/%d)\n",a,b);
        printf("6- Calcular la multiplicacion (%d*%d)\n",a,b);
        printf("7- Calcular el factorial (%d!)\n",a);
        printf("8- Calcular todas las operacioneS\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                printf("ingresar valor A\n");
                fflush(stdin);
                gets(auxiliar);
                if(esNumerico(auxiliar))
                a=atoi(auxiliar);
                else
                printf("El valor es invalido\n");
                break;

            case 2:

                printf("ingresar valor B\n");
                fflush(stdin);
                gets(auxiliar);
                if(esNumerico(auxiliar))
                b=atoi(auxiliar);
                else
                printf("El valor es invalido\n");
                break;

            case 3:

                resultado=retornarSuma(a,b);
                printf("\tResultado : %d\n",resultado);
                system("PAUSE");

                break;
            case 4:

                resultado=retornarResta(a,b);
                printf("\tResultado : %d\n",resultado);
                system("PAUSE");

                break;
            case 5:
                 if(b==0)
                 {
                     printf("No se puede dividir al 0\n");
                     system("PAUSE");
                     break;
                 }
                resultadoF=retornarDivision(a,b);
                printf("\tResultado : %.2f\n",resultadoF);
                system("PAUSE");
                break;
            case 6:
                 resultadoF=retornarMultiplicacion(a,b);
                printf("\tResultado : %.2f\n",resultadoF);
                system("PAUSE");
                break;
            case 7:

               if(a==0)
                 {
                     printf("El factorial de 0 es 1\n");
                     system("PAUSE");
                     break;
                 }
                resultado=retornarFactorial(a);
                printf("\tResultado : %d\n",resultado);
                system("PAUSE");

                break;
            case 8:

                resultado=retornarSuma(a,b);
                printf("SUMA : %d\n",resultado);

                resultado=retornarResta(a,b);
                printf("RESTA : %d\n",resultado);

                if(b==0)
                printf("DIVISION : NO\n");
                else
                {
                resultadoF=retornarDivision(a,b);
                printf("DIVISION : %.2f\n",resultadoF);
                }
                resultado=retornarMultiplicacion(a,b);
                printf("MULTIPLICACION : %d\n",resultado);

                 if(a==0)
                printf("FACTORIAL : 1\n");
                 else
                 {
                resultado=retornarFactorial(a);
                printf("FACTORIAL : %d\n",resultado);
                 }
                system("PAUSE");
                break;
            case 9:


                seguir = 'n';
                break;
        }


};
return 0;
}
