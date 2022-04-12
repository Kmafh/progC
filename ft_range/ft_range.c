



/**
 * @file ft_range.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Escriba un programa que tome un número entero positivo como argumento y muestre la suma
 * de todos los números primos inferiores o iguales a él seguido de una nueva línea.
 *
 * Si el número de argumentos no es 1, o el argumento no es un número positivo,
 * simplemente muestre 0 seguido de una nueva línea.
 *
 * Sí, los ejemplos son correctos.
 *
 *
 * 
 * 
 */
#include <unistd.h>
#include <stdio.h>
#include "../libpsnal.h"

int main(int argc, char *argv[])
    {
        
        if (argc==2)
            {   
                int n;
                
                n=ft_char_number(argv[1]);
                while(n>2)
                {
                    if(ft_prime(n)==0)
                        printf("%d\n",n);
                    n--;
                }     
            }
        else 
            {
                ft_putchar('0');
                ft_putchar('\n');
            }
    ft_putchar('\n');
    return(0);
    }
