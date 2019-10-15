/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int opcion;
    float a,b,c,x1=0, x2=0, base, alt, area=0, año actual, mes actual, dia actual, dia de su cumpleanios, mes de su cumpleanios, año de su cumpleanios, edad=0;
    printf ("menu principal\n1.Ecuacion cuadratica\n2.Area del triangulo\n");
    scanf ("%d",&opcion);
    switch (opcion) 
    {
        case 1:
            printf("ingrese el coeficiente a: ");
            scanf("%f",&a);
            printf("ingrese el coeficiente b:");
            scanf("%f",&b);
            printf("ingrse el coeficiente c: ");
            scanf("%f",&c);
            x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
            x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
            printf("El resultado de x1 es %.2f\n",x1);
            printf("El resultado de x2 es %2f\n",x2);
        break;
        
        case 2:
            printf("ingrese la base: ");
            scanf("%f",&base);
            printf("ingrese la altura: ");
            scanf("%f",&alt);
            area=(base*alt)/2;
            printf("el area del triangulo es %.2f",area);
            break;
            case 3:
            printf("ingrese el año actual: ");
            scanf("%f",&año);
            printf("ingrese el mes actual: ");
            scanf("%f",&mes);
            printf("ingrse el dia actual: ");
            scanf("%f",&dia);
            printf("ingrese el dia de su cumpleanios: ");
            scanf("%f",&dia de su cumpleanios);
            printf("ingrese mes de su cumpleanios: ");
            scanf("%f",&mes de su cumpleanios);
            printf("ingrese años de su cumpleanios: ");
            scanf("%f",&año de su cumpleanios);
            if (dia actual<dia de su cumpleanios)
            {
                resta_(dia+30)-dia de su cumpleanios;
            }
            else if (mes)
            case 4:
                exit(0);
            break;
            default:
                printf("opcion invalida");
        }
            
 
 
}
