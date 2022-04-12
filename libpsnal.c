#include <unistd.h>
#include <stdio.h>
#include "libpsnal.h"

int strleng(char *str)
{
    int i;
    i=0;
    while(str[i]!='\0')
            i++;
    return (i);
}
void ft_putchar(char c)
    {write(1,&c,1);}

int ft_prime(int n)
{   
    int cont;
    int aux;
    int div;
    div=2;
    cont=0;
    aux=0;
    while(cont<n)
        {
            
            if(n%div==0)
               aux++;
               
            cont++;
            div++;
        }
        if(aux>1)
        return(1);
    return(0);
}

int ft_number(int str)
{
    int cont;
    cont=0;
    int size;
    int number;
    size=str;
    while (cont<size)
    {
        
        if(size>10)
            number=size/10+size%10;

        cont++;
    }
    return (number);
}

int ft_char_number(char *str)
{
        int number;
        int i;
        i=0;
        number=0;
        while(str[i]>='0' && str[i]<='9')
            {
                number=number*10+(str[i]-'0');
                i++;
            }
    return(number);
}
